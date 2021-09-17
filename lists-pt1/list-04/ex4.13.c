/*
    Nome: ex.4.13.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 13.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>

int main(){

    int i = 0;
    int posicao = 0;
    int array[10] = { 0 };

    for ( i = 0; i < 10; i++ ) {
         printf( "array[%d]: ", i );
         scanf( "%d", &array[i] );
    }

    do {
        printf( "Posicao a ser removida (0 a 9): " );
        scanf( "%d", &posicao );

        if ( posicao  < 0 || posicao  > 9 ) {
        puts( "Quantidade incorreta, forneca novamente!" );

        }

    } while ( posicao  < 0 || posicao  > 9 );

    for ( i = 0; i < posicao; i++ ) {
         printf( "array[%d] = %d\n", i, array[i] );
    }

    for ( i = posicao; i < 9 ; i++ ) {
         printf( "array[%d] = %d\n", i, array[i+1] );
    }

    return 0;

}//Fim do main.
