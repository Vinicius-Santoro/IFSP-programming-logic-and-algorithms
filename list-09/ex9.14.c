/*
    Nome: ex.9.14.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 14.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

void tornarMaiuscula( char *str );

int main() {

    char string[41];

    printf("Frase: ");
    fgets( string, 40, stdin) ;
    string[strlen(string) - 1] = '\0';

    tornarMaiuscula( string );

    return 0;

}//Fim da função Main

void tornarMaiuscula( char *str ) {

    int t = strlen( str );
    for ( int i = 0; i < t; i++ ) {

        str[i] = toupper(str[i]);

    }
    printf( "%s", str );

}//Fim da função tornarMaiuscula.
