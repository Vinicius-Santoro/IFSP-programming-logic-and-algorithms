/*
    Nome: ex.4.4.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 4.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int array[5];
	int i;
	int buscaPor = 0;
	
	
	for ( i = 0; i < 5; i++ ) {
		printf( "array[%d]: ", i );
		scanf( "%d", &array[i] );	
	}
		
	printf( "\n" );
	
	printf( "Buscar por: " );
	scanf( "%d", &buscaPor );
	
	printf( "\n" );
	
	for ( i = 0; i < 5; i++ ) {
		if ( array[i] == buscaPor) {
			printf( "Indice %d: ACHEI\n", i );
		} else {
			printf( "Indice %d: NAO ACHEI\n", i );
		}	
	}
	

}//Fim do main.


