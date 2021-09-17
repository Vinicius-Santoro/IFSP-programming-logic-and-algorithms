/*
    Nome: ex.9.19.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 19.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

void substring( char *recorte, const char *origem, int inicio, int fim );

int main() {

    char string[41];
    char recorte[41];
    int inicio;
    int fim;

    printf( "String: " );
    fgets( string, 41, stdin );
    string[strlen(string) - 1] = '\0';

    printf( "Inicio: " );
    scanf( "%d", &inicio );

    printf( "Fim: " );
    scanf( "%d", &fim );

    substring( recorte, string, inicio, fim );

    return 0;

}//Fim da função Main

void substring( char *recorte, const char *origem, int inicio, int fim ) {

    int j = strlen(origem);

    printf( "Recorte: " );

    if ( inicio > fim || fim > j || inicio > j ) {

        printf( "%s", origem );

    } else {

        for( int i = 0; i < fim; i++ ){

            recorte[i] = origem[i];

        }
        recorte[fim] = '\0';

        printf("%s", recorte);

    }

}//Fim da função substring.
