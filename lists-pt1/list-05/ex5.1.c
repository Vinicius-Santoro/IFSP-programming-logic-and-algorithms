/*
    Nome: ex.5.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 1.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>


int main(){

    int i = 0;
    int j = 0;
    int pulo = 0;
    int array[3][2] = { 0 };

    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 2; j++ ) {
            printf( "array[%d][%d]: ", i, j);
            scanf( "%d", &array[i][j] );
        }
    }

    puts( "\n" );

    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 2; j++ ) {
            printf( "%03d",  array[i][j]);
            if ( j == 0 ) {
                printf( " " );
            }
        }
        printf( "\n" );
    }

    return 0;

}//Fim do main.


