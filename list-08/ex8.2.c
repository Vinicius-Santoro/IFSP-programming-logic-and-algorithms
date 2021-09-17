/*
    Nome: ex.8.2.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 8, exercício 2.
*/
    #include<stdio.h>
    #include<stdlib.h>

void trocar( int *n1, int *n2 );

int main() {

    int n1Main = 0;
    int n2Main = 0;

    printf( "n1: " );
    scanf( "%d", &n1Main );

    printf( "n2: " );
    scanf( "%d", &n2Main );

    printf( "Antes:\n" );
    printf( "    n1: %d\n", n1Main );
    printf( "    n2: %d\n", n2Main );

    trocar( &n1Main, &n2Main );

    printf( "Depois:\n" );
    printf( "    n1: %d\n", n1Main );
    printf( "    n2: %d", n2Main );

}//Fim da função main.

void trocar( int *n1, int *n2 ) {

/*Cálculo da troca de valores de
duas variáveis sem usar uma outra
variável auxiliar.*/

    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;

}//Fim da função trocar.


