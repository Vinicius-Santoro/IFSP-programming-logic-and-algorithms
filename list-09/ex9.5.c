/*
    Nome: ex.9.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 9, exerc�cio 5.
*/
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

int main(void) {

    char t[41]; //vari�vel texto.

    printf( "Nome: ");
    fgets( t, 41, stdin );

    t[strlen(t)-1] = '\0';

    for ( int i = 0; i < 5; i++ ) {
        printf( "%s\n", t );
    }

    return 0;

}//Fim da fun��o main.



