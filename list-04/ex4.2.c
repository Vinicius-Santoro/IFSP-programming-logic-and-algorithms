/*
    Nome: ex.4.2.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 4, exerc�cio 2.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int array[5];
	int i;
	int multi;
	
	for ( i = 0; i < 5; i++ ) {
		printf( "array[%d]: ", i );
		scanf( "%d", &array[i] );
	}
	
	printf( "Multiplicar por: " );
	scanf( "%d", &multi );
		
	printf( "\n" );
	
	for ( i = 0; i < 5; i++ ) {
		printf( "arrayMult[%d] = %d\n", i, ( array[i] * multi ) );
	}
	
}//Fim do main.


