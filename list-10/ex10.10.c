/*
    Nome: ex.10.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 10.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

typedef struct {
    int vermelhoStruct;
    int verdeStruct;
    int azulStruct;
} Cor;

Cor novaCor( int vermelho, int verde, int azul );
void imprimirCor( const Cor *c );
Cor clarear( const Cor *c );


int main() {

    Cor corMain;
    Cor auxMain;
    Cor auxMain2;

    printf( "Vermelho: " );
    scanf( "%d", &corMain.vermelhoStruct );

    printf( "Verde: " );
    scanf( "%d", &corMain.verdeStruct );

    printf( "Azul: " );
    scanf( "%d", &corMain.azulStruct );

    auxMain = novaCor( corMain.vermelhoStruct, corMain.verdeStruct, corMain.azulStruct );
    printf( "Cor base:" );
    imprimirCor( &auxMain );

    //chamando a função com a cor original.
    auxMain2 = clarear( &auxMain );
    printf( "Cor clareada:" );
    imprimirCor( &auxMain2 );

 //   printf(  "auxMain2 = %d\n", auxMain2);

}//Fim da função main.

Cor novaCor( int vermelho, int verde, int azul ) {

    Cor aux;

    aux.vermelhoStruct = vermelho;
    aux.verdeStruct = verde;
    aux.azulStruct = azul;

    if ( aux.vermelhoStruct <= 0 ) {
         aux.vermelhoStruct = 0;
    }

    if ( aux.vermelhoStruct >= 255 ) {
         aux.vermelhoStruct = 255;
    }

    if ( aux.azulStruct <= 0 ) {
         aux.azulStruct = 0;
    }

    if ( aux.azulStruct >= 255 ) {
         aux.azulStruct = 255;
    }

    if ( aux.verdeStruct <= 0 ) {
         aux.verdeStruct = 0;
    }

    if ( aux.verdeStruct >= 255 ) {
         aux.verdeStruct = 255;
    }

    return aux;

}//Fim da função novaCor

Cor clarear( const Cor *c ) {

//variáveis auxiliares.

    Cor x;

    x.vermelhoStruct = c->vermelhoStruct;
    x.verdeStruct = c->verdeStruct;
    x.azulStruct = c->azulStruct;

/***************************************************************************************
    1º Se o valor de todos os componentes da cor original forem
iguais a zero, a nova cor deve ser gerada com todos os componentes valendo 3;
    2º Caso algum componente da cor original for maior que 0, mas menor que 3,
    deve-se configurá-lo como 3 na nova cor antes da divisão por 0,7;
    3º Se a divisão por 0,7 de um membro da cor original resultar em algum valor
maior que 255, deve-se configurar, na nova cor, esse componente com o valor 255.
***************************************************************************************/

    if( x.vermelhoStruct == 0 && x.verdeStruct == 0 && x.azulStruct == 0) {

        x.vermelhoStruct = x.verdeStruct = x.azulStruct = 3;//ok!
/*utilizei esse return como um "break". ele retorna meu x e sai
da função.*/
        return x;

    }

    if( x.vermelhoStruct > 0 && x.vermelhoStruct < 3 ) {

        x.vermelhoStruct = (int) 3 / 0.7;

    }

    if( x.verdeStruct > 0 && x.verdeStruct < 3 ) {

        x.verdeStruct = (int) 3 / 0.7;

    }

    if( x.azulStruct > 0 && x.azulStruct < 3 ) {

        x.azulStruct = (int) 3 / 0.7;

    }

     else if ( ( x.vermelhoStruct / 0.7 ) > 255 ) {

        x.vermelhoStruct = 255;

    }

    if ( ( x.verdeStruct ) / 0.7 > 255 ) {

        x.verdeStruct = 255;

    }

    if ( ( x.azulStruct ) / 0.7 > 255 ) {

        x.azulStruct = 255;

    }

    if ( x.vermelhoStruct != 4 && x.vermelhoStruct != 255) {

         x.vermelhoStruct = (int) c->vermelhoStruct / 0.7;
    }

    if ( x.verdeStruct != 4 && x.verdeStruct != 255) {

         x.verdeStruct = (int) c->verdeStruct / 0.7;
    }

    if ( x.azulStruct != 4 && x.azulStruct != 255) {

         x.azulStruct =(int) c->azulStruct / 0.7;
    }

     return x;

}//Fim da função clarear.

void imprimirCor( const Cor *c ) {

    printf( " rgb( %d, %d, %d )\n", c->vermelhoStruct, c->verdeStruct, c->azulStruct );
}

