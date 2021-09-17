/*
    Nome: ex.4.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 8.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>


int main(){

    int i = 0;
    int j = 0;
    int cont = 0;
	int array[10] = { 0 };
	int arrayImpares[10] = { 0 };

	for (  i = 0; i < 10; i++  ) {
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
	}

	for (  i = 0; i <= 10; i++  ) {
        if( array[i] % 2 == 1 ) {
            arrayImpares[i] = array[i];
            cont++;
        }
	}

	if ( cont >= 1 ) {
         for (  i = 0; i < 10; i++  ) {
            if ( arrayImpares[i] != 0 ) {
                printf( "array[%d] = %d\n", j, arrayImpares[i] );
                j++;
            }
        }
	}

    return 0;

}//Fim do main.


