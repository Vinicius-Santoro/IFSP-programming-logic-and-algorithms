/*
    Nome: ex.2.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que exibe se o n�mero fornecido � par ou �mpar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
    	printf("O numero %d e par.", numero);
	}
	else
		printf("O numero %d e impar.", numero);

    return 0;
}
