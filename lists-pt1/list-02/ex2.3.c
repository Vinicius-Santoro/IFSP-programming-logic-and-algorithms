/*
    Nome: ex.2.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que exibe dois n�mero em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    int numero1;
    int numero2;
   
//Recebendo os valores do usu�rio. 
    printf("Entre com um numero: ");
    scanf("%d", &numero1);
    
    printf("Entre com outro numero: ");
    scanf("%d", &numero2);
    
//Estrutura condicional.
    if(numero1 >= numero2){
    	printf("Ordem decrescente: %d >= %d", numero1, numero2);
	}
	else
		printf("Ordem decrescente: %d >= %d", numero2, numero1);

    return 0;
}
