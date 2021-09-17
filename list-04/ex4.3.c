/*
    Nome: ex.4.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	float array[5];
	int i;
	float acumulaSoma = 0;
	float acumulaMult = 1;
	
	for ( i = 0; i < 5; i++ ) {
		printf( "array[%d]: ", i );
		scanf( "%f", &array[i] );
		acumulaSoma += array[i];
		acumulaMult *= array[i];	
	}
		
	printf( "\n" );
	
	printf( "Somatorio: %.2f\n", acumulaSoma );
	printf( "Produtorio: %.2f", acumulaMult );

}//Fim do main.


