/*
    Nome: ex.9.15.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 15.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

void tornarMinuscula(char *str);

int main() {

   char string[41];

    printf( "Frase: " );
    fgets( string, 41, stdin );
    string[strlen(string) - 1] = '\0';
    tornarMinuscula( string );

    return 0;

}//Fim da função Main

void tornarMinuscula( char *str ) {
    int j = strlen( str );

    for ( int i = 0; i < j; i++ ) {
        str[i] = tolower(str[i]);
    }

    printf( "%s", str );
}//Fim da função tornarMinuscula.
