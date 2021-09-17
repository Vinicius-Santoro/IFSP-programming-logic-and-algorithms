/*
    Nome: ex.5.2.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 2.
*/
	#include<stdio.h>
	#include<stdlib.h>


int main(){

    int i;
    int j;
    int array1[3][3] = { 0 };

    int array2[3][3] = { 0 };

    int arraySoma[3][3] = { 0 };


    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 3; j++ ) {
            printf( "array1[%d][%d]: ", i, j);
            scanf( "%d", &array1[i][j] );
        }
    }

    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 3; j++ ) {
            printf( "array2[%d][%d]: ", i, j);
            scanf( "%d", &array2[i][j] );
        }
    }
    printf( "\n" );
    printf( "array1:       array2:       arraySoma:\n" );
    printf( "%03d %03d %03d   %03d %03d %03d   %03d %03d %03d\n", array1[0][0], array1[0][1], array1[0][2],  array2[0][0],
            array2[0][1], array2[0][2], array1[0][0] + array2[0][0], array1[0][1] + array2[0][1], array1[0][2] + array2[0][2] );

    printf( "%03d %03d %03d + %03d %03d %03d = %03d %03d %03d\n", array1[1][0], array1[1][1], array1[1][2],  array2[1][0],
            array2[1][1], array2[1][2], array1[1][0] + array2[1][0], array1[1][1] + array2[1][1], array1[1][2] + array2[1][2] );

    printf( "%03d %03d %03d   %03d %03d %03d   %03d %03d %03d\n", array1[2][0], array1[2][1], array1[2][2],  array2[2][0],
            array2[2][1], array2[2][2], array1[2][0] + array2[2][0], array1[2][1] + array2[2][1], array1[2][2] + array2[2][2] );



}//Fim do main.


