/*
    Nome: ex.3.22c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 22.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int i = 0;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int maior = 0;
	
	printf( "N1: ");
	scanf ( "%d", &n1 );
	
	printf( "N2: ");
	scanf ( "%d", &n2 );
	
	printf( "N3: ");
	scanf ( "%d", &n3 );
	
	printf( "N4: ");
	scanf ( "%d", &n4 );
	
	printf( "N5: ");
	scanf ( "%d", &n5 );
	

	if ( n1 > maior ){
		maior = n1;
	}
	if ( n2 > maior ){
		maior = n2;
	}
	if ( n3 > maior ){
		maior = n3;
	}
	if ( n4 > maior ){
		maior = n4;
	} 
	if ( n5 > maior ){
		maior = n5;
	}
	
	if ( n1 <= 0 || n2 <= 0 || n3 <= 0 || n4 <= 0 || n5 <= 0 ) {
		printf( "Forneca apenas numeros positivos." );
	} else {
		for ( i = maior; i >= 1; i-- ) {
			printf ( "%04d  ", i);
			
			if ( i <= n1 ) {
				printf( "*" );
			} else {
				printf( " " );
			}
			
			if ( i <= n2 ) {
				printf( "*" );
			} else {
				printf( " " );
			}
			
			if ( i <= n3 ) {
				printf( "*" );
			} else {
				printf( " " );
			}
			
			if ( i <= n4 ) {
				printf( "*" );
			} else {
				printf( " " );
			}
			
			if ( i <= n5 ) {
				printf( "*" );
			} else {
				printf( " " );
			}
			printf( "\n" );
		}
	}
	
	return 0;
	
}//Fim do main.
