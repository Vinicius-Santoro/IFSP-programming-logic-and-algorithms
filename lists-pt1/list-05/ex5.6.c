/*
    Nome: ex.5.6.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 6.
*/
	#include<stdio.h>
	#include<stdlib.h>


int main(){

    int i;
    int j;
    int arrayM[2][3] = { 0 };
    int arrayT[3][2] = { 0 };

    for ( i = 0; i < 2; i++ ) {
        for ( j = 0; j < 3; j++ ) {
            printf( "array[%d][%d]: ", i, j);
            scanf( "%d", &arrayM[i][j] );
        }
    }

    printf( "\n" );

    printf( "M:\n" );
    for ( i = 0; i < 2; i++ ) {
        for ( j = 0; j < 3; j++ ) {
            printf( "%03d", arrayM[i][j]);

            if ( j == 0 ) {
                printf( " " );
            }

            if ( j == 1 ) {
                printf( " " );
            }
        }
        printf( "\n" );
    }

    printf( "\n" );

//Transportando o array 2x3 para 3x2.
    for ( i = 0; i < 2; i++ )
        for ( j = 0; j < 3; j++ ) {
            arrayT[j][i] = arrayM[i][j];
        }

    printf( "Mt:\n" );
    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 2; j++ ) {
            printf( "%03d", arrayT[i][j]);
            if ( j == 0 ) {
                printf( " " );
            }
        }
        printf( "\n" );
    }

}//Fim do main.


