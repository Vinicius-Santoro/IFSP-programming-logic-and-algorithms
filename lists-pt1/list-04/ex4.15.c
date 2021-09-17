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
    int j = 0;
    int k = 0;
	int array1[5] = { 0 };
	int array2[5] = { 0 };
	int arrayInte[5] = { 0 };

	printf( "Forneca os valores do primeiro array:\n" );

	for (  i = 0; i < 5; i++  ) {
        printf( "\tarray1[%d]: ", i );
        scanf( "%d", &array1[i] );
	}

	printf( "\nForneca os valores do segundo array:\n" );

	for (  i = 0; i < 5; i++  ) {
        printf( "\tarray2[%d]: ", i );
        scanf( "%d", &array2[i] );
	}

	puts( "\n" );

	for (  i = 0; i < 5; i++  ) {
        if (array1[0] == array2[i]) {
            arrayInte[i] = array1[0];
            k++;
        }

        if (array1[1] == array2[i]) {
            arrayInte[i] = array1[1];
            k++;
        }

        if (array1[2] == array2[i]) {
            arrayInte[i] = array1[2];
            k++;
        }

        if (array1[3] == array2[i]) {
            arrayInte[i] = array1[3];
            k++;
        }

        if (array1[4] == array2[i]) {
            arrayInte[i] = array1[4];
            k++;
        }

        if( k >= 1 ) {
            if ( arrayInte[i] != 0 ) {
            printf( "arrayInterseccao[%d] = %d\n", j, arrayInte[i] );
            j++;
            }
        } else {
            puts( "Nao ha interseccao entre os elementos dos dois arrays fornecidos!" );
        }
	}

    return 0;

}//Fim do main.


