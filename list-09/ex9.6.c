/*
    Nome: ex.9.6.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 9, exerc�cio 6.
*/
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

int main(void) {

    char nome[41]; //vari�vel texto.
    int auxLen = 0;

    printf( "Nome: ");
    fgets( nome, 41, stdin );

    nome[strlen(nome)-1] = '\0';

    auxLen = strlen(nome);

    for ( int i = 0; i < auxLen; i++ ) {
        printf( "%s\n", nome );
    }

    return 0;

}//Fim da fun��o main.



