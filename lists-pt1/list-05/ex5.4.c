/*
    Nome: ex.5.4.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 4.
*/
	#include<stdio.h>
	#include<stdlib.h>


int main(){

    int i;
    int j;
    int array[2][2] = { 0 };

    for ( i = 0; i < 2; i++ ) {
        for ( j = 0; j < 2; j++ ) {
            printf( "array[%d][%d]: ", i, j);
            scanf( "%d", &array[i][j] );
        }
    }

     printf( "Determinante: %d", array[0][0] * array[1][1] - ( array[0][1] * array[1][0] ) );

}//Fim do main.


