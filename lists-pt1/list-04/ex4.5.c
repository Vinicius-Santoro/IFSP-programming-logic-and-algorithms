/*
    Nome: ex.4.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int array[5];
	int i;
	int buscaPor = 3;
	int ocorrencia = 0;
	
	
	for ( i = 0; i < 5; i++ ) {
		printf( "array[%d]: ", i );
		scanf( "%d", &array[i] );	
	}
		
	printf( "\n" );
	
	printf( "Buscar por: " );
	scanf( "%d", &buscaPor );
	
	printf( "\n" );
	
	for ( i = 0; i < 5; i++ ) {
		if ( buscaPor == array[i] ) {
			ocorrencia++;
		} 
	}
	 
	if ( ocorrencia == 1 ) {
		printf( "O array contem %d ocorrencia do valor %d.", ocorrencia, buscaPor );
	} 
	
	if ( ocorrencia >= 2  ){
		printf( "O array contem %d ocorrencias do valor %d.", ocorrencia, buscaPor );
	} 
	
	if ( ocorrencia == 0 ) {
		printf( "O array nao contem o valor %d.", buscaPor);
	}	
	
	return 0;
	
}//Fim do main.


