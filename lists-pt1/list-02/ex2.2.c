/*
    Nome: ex.2.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que exibe dois n�mero em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    int numero1;
    int numero2;
    
    printf("Entre com um numero: ");
    scanf("%d", &numero1);
    
    printf("Entre com outro numero: ");
    scanf("%d", &numero2);

//In�cio da estrutura condicional.
    if(numero1 >= numero2){
    	printf("Ordem crescente: %d <= %d", numero2, numero1);
	}
	else
		printf("Ordem crescente: %d <= %d", numero1, numero2);

    return 0;
}
