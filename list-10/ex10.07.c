/*
    Nome: ex.10.7.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 7.
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
int getVermelho( const Cor *c );
int getVerde( const Cor *c );
int getAzul( const Cor *c );
void imprimirCor( const Cor *c );

int main() {

    Cor corMain;
    Cor auxMain;

    printf( "Vermelho: " );
    scanf( "%d", &corMain.vermelhoStruct );

    printf( "Verde: " );
    scanf( "%d", &corMain.verdeStruct );

    printf( "Azul: " );
    scanf( "%d", &corMain.azulStruct );

    auxMain = novaCor( corMain.vermelhoStruct, corMain.verdeStruct, corMain.azulStruct );
    imprimirCor( &auxMain );

    printf( "\ngetVermelho(): %d\n", getVermelho(&auxMain) );
    printf( "getVerde(): %d\n", getVerde(&auxMain) );
    printf( "getAzul(): %d\n", getAzul(&auxMain) );

    /***************************************************************************

    int getVermelho( const Cor *c );
    int getVerde( const Cor *c );
    int getAzul( const Cor *c );
    void imprimirCor( const Cor *c );

    Se os protótipos das funções não fossem ponteiros, na chamada da função não
    eu não usaria " & ".

    Lembrete: ponteiro [ -> ]
              não ponteiro [ . ]

    ***************************************************************************/

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

void imprimirCor( const Cor *c ) {

    printf( "Cor: rgb( %d, %d, %d )", c->vermelhoStruct, c->verdeStruct, c->azulStruct );
}

int getVermelho( const Cor *c ) {

    return c->vermelhoStruct;
}

int getVerde( const Cor *c ) {

    return c->verdeStruct;
}

int getAzul( const Cor *c ) {

    return c->azulStruct;
}
