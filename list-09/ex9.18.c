/*
    Nome: ex.9.18.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 18.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

bool ehPalindromo( const char *str );

int main() {

    char string[41];

    printf("String: ");
    fgets(string, 41, stdin);
    string[strlen(string) - 1] = '\0';

    if ( ehPalindromo( string ) ) {

        printf( "\"%s\" eh um palindromo!", string );

    } else {

        printf( "\"%s\" nao eh um palindromo!", string );

    }

    return 0;

}//Fim da função Main

bool ehPalindromo (const char *str) {

    char inversa[41];
    int valor = 0;

    strcpy( inversa, str );
    strrev( inversa );
    valor = strcmp( str, inversa );

    if (valor == 0 ) {

        return true;

    } else {

        return false;
    }

}//Fim da função hPalindromo.
