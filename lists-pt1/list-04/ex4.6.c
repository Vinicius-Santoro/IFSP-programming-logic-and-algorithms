/*
    Nome: ex.4.6.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 6.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<locale.h>
	#include<stdlib.h>
	#include<math.h>

int main(){	

	int array[5] = { 0 };
	int i = 0;
	int buscaPor = 3;
	int ocorrencia = 0;
	int x[5] = { 0 }; //Variavel para armazenar meus indices.
	
		
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
			x[ocorrencia] = i;
			ocorrencia++;
		}
	}
	
	if ( ocorrencia == 0) {
		printf( "\nO array nao contem o valor %d.", buscaPor );
	}
	
	if ( ocorrencia == 1) {
		printf( "O valor %d foi encontrado no indice %d do array.", 
		buscaPor, x[0] ); 	
	}
	
	if ( ocorrencia == 2) {
		printf( "O valor %d foi encontrado nos indices %d e %d do array.", 
		buscaPor, x[0], x[1] ); 	
	}
	
	if ( ocorrencia == 3) {
		printf( "O valor %d foi encontrado nos indices %d, %d e %d do array.", 
		buscaPor, x[0], x[1], x[2] ); 
	}
	
	if ( ocorrencia == 4) {
		printf( "O valor %d foi encontrado nos indices %d, %d, %d e %d do array.", 
		buscaPor, x[0], x[1], x[2], x[3] ); 
	}
	
	if ( ocorrencia == 5) {
		printf( "O valor %d foi encontrado nos indices %d, %d, %d, %d e %d do array.", 
		buscaPor, x[0], x[1], x[2], x[3], x[4] ); 
	}
	
}//Fim do main.


