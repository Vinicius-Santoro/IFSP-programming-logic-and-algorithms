/*
    Nome: ex.9.2.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 2.
*/
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

int main(void) {

    char t[41]; //variável texto.
    int numCaracteres = 0;

    printf( "Sentenca: " );
    fgets( t, 41, stdin );

    t[strlen(t)-1] = '\0';

    numCaracteres = strlen(t);

   printf( "Primeiro caractere: %c\n", t[0] );
   printf( "Ultimo caractere: %c\n", t[numCaracteres-1] );
   printf( "Numero de caracteres: %d", strlen(t) );

   return 0;

}//Fim da função main.



