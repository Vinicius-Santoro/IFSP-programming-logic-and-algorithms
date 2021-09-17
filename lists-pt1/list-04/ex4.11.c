/*
    Nome: ex.4.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 11.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
    #define N

int main(){

    int i = 0;
    int quant;
    int valorInserido = 0;

    do {
        printf( "Quantidade de elementos (1 a 9): " );
        scanf( "%d", &quant );

        if ( quant < 1 || quant > 9 ) {
        puts( "Quantidade incorreta, forneca novamente!" );

        }

    } while ( quant < 1 || quant > 9 );

    int array[quant];

        for ( i = 0; i < quant; i++ ) {
            printf( "array[%d]: ", i );
             scanf( "%d", &array[i] );
        }

    printf( "Valor que sera inserido: " );
    scanf( "%d", &valorInserido );

    printf( "array[0] = %d\n", valorInserido );

    for ( i = 0; i < quant; i++ ) {
            printf( "array[%d] = %d\n", i + 1, array[i]);
    }

    return 0;

}//Fim do main.


