/*
    Nome: ex.9.21.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 21.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

void imprimirCentralizado( const char *str );

int main() {

    char string[41];

    printf( "String: " );
    fgets( string, 41, stdin );
    string[strlen(string) - 1] = '\0';

    imprimirCentralizado( string );

    return 0;

}//Fim da função Main

void imprimirCentralizado( const char *str ) {

    int visaoTerminal = 80;
    int quantidadeString = strlen( str );
    int quantidadeEspacos = 0;

   quantidadeEspacos = visaoTerminal / 2 - quantidadeString  / 2;

    for ( int i = 0; i <= quantidadeEspacos; i++ ) {

        printf( " " );
    }

    printf( "%s", str );

    for ( int i = 0; i <= quantidadeEspacos; i++ ) {

        printf(" ");

    }

}//Fim da função imprimirCentralizado.
