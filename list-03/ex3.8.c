/*
    Nome: ex.3.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 8.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int numero;
	int i; //variável contadora.
	
	printf("Forneca um numero menor ou igual a zero: ");
	scanf("%d", &numero);
	
	if(numero <= 0){
		for(i = 0; i >= numero; i--){
		printf("%d ", i);
		}
	}else{
		printf("Valor incorreto (positivo)");
	}
	
	return 0;
	
}//Fim do main.
