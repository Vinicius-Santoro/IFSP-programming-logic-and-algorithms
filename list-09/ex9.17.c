/*
    Nome: ex.9.17.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 17.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

int contarPalavras(const char *str);

int main() {

    char f[41]; //frase.

    printf( "Frase: " );
    fgets( f, 41, stdin );
    printf( "Quantidade de palavras: %d", contarPalavras(f) );

    return 0;

}//Fim da função Main

int contarPalavras( const char *str ) {

    int acumulador = 1;
    int t = strlen( str );
    char aux = ' ';

    for ( int i = 0; i < t; i++ ){
        if ( str[i] == aux ) {
            acumulador++;
        }
    }
    return acumulador;

}//Fim da função contarPalavras.
