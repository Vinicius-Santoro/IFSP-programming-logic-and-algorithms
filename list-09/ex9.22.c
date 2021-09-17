/*
    Nome: ex.9.22.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 9, exerc�cio 22.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

void imprimirDireita( const char *str );

int main() {

    char string[41];

    printf( "String: " );
    fgets( string, 41, stdin );
    string[strlen(string) - 1] = '\0';

    imprimirDireita( string );

    return 0;

}//Fim da fun��o Main

void imprimirDireita( const char *str ) {

    int visaoTerminal = 80;
    int quantidadeString = strlen( str );
    int quantidadeEspacos = 0;

    quantidadeEspacos = visaoTerminal - quantidadeString;


    for ( int i = 0; i <=  quantidadeEspacos; i++ ) {

        printf(" ");

    }

    printf( "%s", str );

}//Fim da fun��o imprimirDireita.
