/*
    Nome: ex.9.20.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 20.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

bool contem( const char *fonte, const char *aPesquisar );

int main() {

    char string1[41];
    char string2[41];

    printf( "String: " );
    fgets( string1, 41, stdin );
    string1[strlen(string1)-1] = '\0';

    printf( "String a pesquisar: " );
    fgets( string2, 41, stdin );
    string2[strlen(string2)-1] = '\0';

    if( contem( string1, string2 ) == true ){

        printf( "\"%s\" esta contida em \"%s\"", string2, string1 );

    } else {

        printf( "\"%s\" nao esta contida em \"%s\"", string2, string1 );

    }

    return 0;

}//Fim da função Main

bool contem( const char *fonte, const char *aPesquisar ){

    int tamanho = strlen(fonte);
    int aux = 0;
    int j = 0;

    for ( int i = 0; i < tamanho; i++ ){

        if( aPesquisar[j] == fonte[i] ){

           aux += 1;
           j++;

        }
    }

    if( aux == strlen(aPesquisar) ){

        return true;

    } else {

        return false;

    }
}//Fim da função contem.
