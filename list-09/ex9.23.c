/*
    Nome: ex.9.23.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 23.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

void imprimirCaixa( const char *str );

int main() {

    char string[41];

    printf( "String: " );
    fgets( string, 41, stdin );
    string[strlen(string) - 1] = '\0';

    imprimirCaixa( string );

    return 0;

}//Fim da função Main

void imprimirCaixa( const char *str ) {

    int aux = strlen( str );

    printf( "++" );

    for ( int i = 0; i < aux + 2; i++ ) {

        printf( "=" );
    }

    printf( "++" );
    printf( "\n" );
    printf( "|| %s ||\n", str );
    printf( "++" );

    for ( int i = 0; i < aux + 2; i++ ) {

        printf( "=" );

    }

    printf( "++" );

}//Fim da função imprimirCaixa.
