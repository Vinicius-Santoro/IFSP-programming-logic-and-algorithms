/*
    Nome: ex.9.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 9, exerc�cio 10.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

int tamanho( const char *str );

int main() {

    char frase[41];

    printf( "Frase: " );
    fgets(frase, 41, stdin);

    frase[strlen(frase)-1] = '\0';

    tamanho( frase );

    printf( "%d caractere(s)!", tamanho(frase) );

}//Fim da fun��o main.

int tamanho( const char *str ) {

    int i = 0;

    while( str[i] != '\0' ) {

        i++;
    }

    return i;

}//Fim da fun��o tamanho.


