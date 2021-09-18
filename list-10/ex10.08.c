/*
    Nome: ex.10.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 8.
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
void setVermelho( Cor *c, int vermelho );
void setVerde( Cor *c, int verde );
void setAzul( Cor *c, int azul );
void imprimirCor( const Cor *c );

int main() {

    Cor corMain;
    Cor auxRgb;
    Cor auxRgbAlterado;

    printf( "Vermelho: " );
    scanf( "%d", &auxRgb.vermelhoStruct );

    printf( "Verde: " );
    scanf( "%d", &auxRgb.verdeStruct );

    printf( "Azul: " );
    scanf( "%d", &auxRgb.azulStruct );

    auxRgb = novaCor( auxRgb.vermelhoStruct, auxRgb.verdeStruct, auxRgb.azulStruct );

    printf( "Novo vermelho: " );
    scanf( "%d", &auxRgbAlterado.vermelhoStruct );

    printf( "Novo verde: " );
    scanf( "%d", &auxRgbAlterado.verdeStruct );

    printf( "Novo azul: " );
    scanf( "%d", &auxRgbAlterado.azulStruct );

    printf( "Cor:" );
    imprimirCor( &auxRgb );

    printf( "\n" );

    auxRgbAlterado = novaCor( auxRgbAlterado.vermelhoStruct, auxRgbAlterado.verdeStruct, auxRgbAlterado.azulStruct );

    //Fazendo alteração da corMain utilizando os sets.
    setVermelho( &corMain, corMain.vermelhoStruct );
    setVerde( &corMain, corMain.verdeStruct );
    setAzul( &corMain, corMain.azulStruct );

    printf( "Cor alterada:" );
    imprimirCor( &auxRgbAlterado );

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

void setVermelho( Cor *c, int vermelho ) {

    c->vermelhoStruct = vermelho;
    //Meu membro "vermelho struct" recebe o inteiro.

}//Fim da função setVermelho.

void setVerde( Cor *c, int verde ) {

    c->verdeStruct = verde;

}//Fim da função setVerde.

void setAzul( Cor *c, int azul ) {

    c->azulStruct = azul;

}//Fim da função setAzul.

void imprimirCor( const Cor *c ) {

    printf( " rgb( %d, %d, %d )", c->vermelhoStruct, c->verdeStruct, c->azulStruct );
}

