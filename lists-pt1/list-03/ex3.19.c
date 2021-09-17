/*
    Nome: ex.3.19c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 19.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int i;
	char j; 
		
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		}
	printf("\n");
	}
	for(i = 4; i > 0; i--){
		for(j = 1; j <= i; j++){
			printf("*");
		}
	printf("\n");
	}

	return 0;
	
}//Fim do main.
