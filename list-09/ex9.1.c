/*
    Nome: ex.9.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 9, exerc�cio 1.
*/
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

int main(void) {

    char t[41]; //vari�vel texto.

    printf( "String: " );
    fgets( t, 41, stdin );

    t[strlen(t)-1] = '\0';

    printf( "%c, %c, %c, %c.", t[0], t[1], t[2], t[3] );

}//Fim da fun��o main.



