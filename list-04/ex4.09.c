/*
    Nome: ex.4.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 9.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>


int main(){

    int i = 0;
    int j = 0;
    int array[5] = { 0 };

    for ( i = 0; i < 5; i++ ) {
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }

    puts( "\n" );

    for ( i = 4; i >= 0; i-- ) {
        printf( "arrayInv[%d] = %d\n", j, array[i] );
        j++;
    }

    return 0;

}//Fim do main.


