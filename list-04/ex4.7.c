/*
    Nome: ex.4.7.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 7.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>


int main(){

    int i = 0;
	int array1[5] = { 0 };
	int array2[5] = { 0 };

	printf( "Forneca os valores do primeiro array:\n" );

	for (  i = 0; i < 5; i++  ) {
        printf( "\tarray1[%d]: ", i );
        scanf( "%d", &array1[i] );
	};

	printf( "\nForneca os valores do segundo array:\n" );

	for (  i = 0; i < 5; i++  ) {
        printf( "\tarray2[%d]: ", i );
        scanf( "%d", &array2[i] );
	}

	puts( "\n" );

	for (  i = 0; i < 5; i++  ) {
        printf( "arraySoma[%d] = %d\n", i, array1[i] + array2[i] );
	}

    return 0;

}//Fim do main.


