/*
    Nome: ex.9.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 11.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

int contarOcorrencias( const char *str, char c );

int main() {

    char c;
    char frase[41] = { " " };
    int comp;

    printf( "Caractere: " );
    scanf( " %c", &c );
    getchar();

    do {

        printf( "Frase: " );
        fgets(frase, 41, stdin);
        frase[strlen(frase)-1] = '\0';

        comp =  strcmp( frase, "fim" );

        if( comp != 0 ) {
            printf( "\"%s\" tem %d ocorrencia(s) do caractere '%c'\n", frase, contarOcorrencias( frase, c ), c );

        }

    } while( comp != 0);

}//Fim da função main.

int contarOcorrencias( const char *str, char c ) {

    int i = 0;
    int aux = 0;

    while( str[i] != '\0' ) {

        if( c == str[i] ) {

            aux++;
        }

        i++;
    }

    return aux;

}//Fim da função contarOcorrencias.

