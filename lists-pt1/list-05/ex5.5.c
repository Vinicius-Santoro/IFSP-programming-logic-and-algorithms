/*
    Nome: ex.5.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 5.
*/
	#include<stdio.h>
	#include<stdlib.h>


int main(){

    int i;
    int j;
    int array[3][3] = { 0 };

    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 3; j++ ) {
            printf( "array[%d][%d]: ", i, j);
            scanf( "%d", &array[i][j] );
        }
    }

     printf( "Determinante: %d",
            array[0][0] * array[1][1] * array[2][2] +
            array[0][1] * array[1][2] * array[2][0] +
            array[0][2] * array[1][0] * array[2][1] -
          ( array[0][2] * array[1][1] * array[2][0] +
            array[0][0] * array[1][2] * array[2][1] +
            array[0][1] * array[1][0] * array[2][2] ));

}//Fim do main.


