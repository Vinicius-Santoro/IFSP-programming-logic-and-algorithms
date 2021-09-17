/*
    Nome: ex.5.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 3.
*/
	#include<stdio.h>
	#include<stdlib.h>


int main(){

    int i;
    int j;
    int valorMult = 0;
    int array[3][4] = { 0 };

    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 4; j++ ) {
            printf( "array1[%d][%d]: ", i, j);
            scanf( "%d", &array[i][j] );
        }
    }

    printf( "Multiplicar por: " );
    scanf( "%d", &valorMult );

    printf( "arrayMult:\n" );
    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 4; j++ ) {
            printf( "%03d",  array[i][j] * ( valorMult));

            if ( j == 0 ) {
                printf( " " );
            }

            if ( j == 1 ) {
                printf( " " );
            }

            if ( j == 2 ) {
                printf( " " );
            }
        }
        printf( "\n" );
    }

}//Fim do main.


