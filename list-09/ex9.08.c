/*
    Nome: ex.9.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 8.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

int main() {

    char texto1[41];
    char texto2[41];
    char texto3[41];

    printf( "String 1: " );
    fgets(texto1, 41, stdin);

    texto1[strlen(texto1)-1] = '\0';


    printf( "String 2: " );
    fgets(texto2, 41, stdin);

    texto2[strlen(texto2)-1] = '\0';


    printf( "String 3: " );
    fgets(texto3, 41, stdin);

    texto3[strlen(texto3)-1] = '\0';

    if( strcmp(texto1, texto2) < 0 && strcmp(texto2, texto3) < 0 )      //1 2 3
        printf( "%s, %s e %s", texto1, texto2, texto3 );
    else if ( strcmp(texto3, texto2) < 0 && strcmp(texto2, texto1) < 0 )//3 2 1
        printf( "%s, %s e %s", texto3, texto2, texto1 );
    else if ( strcmp(texto1, texto3) < 0 && strcmp(texto3, texto2) < 0 )//1 3 2
        printf( "%s, %s e %s", texto1, texto3, texto2 );
    else if ( strcmp(texto2, texto1) < 0 && strcmp(texto1, texto3) < 0 )//2 1 3
        printf( "%s, %s e %s", texto2, texto1, texto3 );
    else if ( strcmp(texto2, texto3) < 0 && strcmp(texto3, texto1) < 0 )//2 3 1
        printf( "%s, %s e %s", texto2, texto3, texto1 );
    else if ( strcmp(texto3, texto1) < 0 && strcmp(texto1, texto2) < 0 )//3 1 2
        printf( "%s, %s e %s", texto3, texto1, texto2 );

    return 0;

}//Fim da main.



