/*
    Nome: ex.3.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 11.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int n1;
	int n2;
	int i; //variável contadora.
	
	printf("N1: ");
	scanf("%d", &n1);
	
	printf("N2: ");
	scanf("%d", &n2);
	
	if(n1 <= n2){
		for(i = n1; i <= n2; i++){
			printf("%d ", i);
		}
	}else{
		for(i = n1; i >= n2; i--){
			printf("%d ", i);
		}
	}
	
	return 0;
	
}//Fim do main.
