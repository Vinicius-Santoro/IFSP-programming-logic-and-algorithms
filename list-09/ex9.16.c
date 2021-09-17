/*
    Nome: ex.9.16.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 16.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

void removerLetra(char *str, char c);

int main() {

    char caractere;
    char string[41];

    printf( "Frase: " );
    fgets( string, 41, stdin );

    printf( "Caractere: " );
    scanf( "%c", &caractere );

    removerLetra( string, caractere );

    return 0;

}//Fim da função Main

void removerLetra(char *str, char c) {

    int i = 0;
    int j = 0;
    int a;

    char aux;

    aux = toupper( c );

    while ( str[i]!='\0' ){
        if ( str[i] != c && str[i] != aux ){
           str[j] = str[i];
           ++j;
        }
        ++i;
    }
    str[j]='\0';
    for( a = 0; a <= j-1; a++ ){
        printf( "%c", str[a] );
    }
}//Fim da função removerLetra.
