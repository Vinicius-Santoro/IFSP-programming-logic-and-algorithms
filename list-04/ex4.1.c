/*
    Nome: ex.4.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 4, exerc�cio 1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int array[5];
	int i;
	
	for ( i = 0; i < 5; i++) {
		printf( "array[%d]: ", i );
		scanf( "%d", &array[i] );
	}
	
	printf( "\n" );
	
	for ( i = 0; i < 5; i++) {
		printf( "arrayCubo[%d] = %d\n", i,  ( array[i] * array[i] * array[i] ) );
	}
	
}//Fim do main.


