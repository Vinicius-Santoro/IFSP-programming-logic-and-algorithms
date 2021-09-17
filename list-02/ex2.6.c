/*
    Nome: ex.2.6.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe um número decimal e se esse 
	número for maior que 20, imprimir sua metade, caso contrário,
	imprimir seu triplo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    float numero;
   
//Recebendo o número do usuário. 
    printf("Entre com um valor: ");
    scanf("%f", &numero);
    
//Início da estrutura condicional.
	if(numero > 20){
		printf("A metade de %.2f e %.2f", numero, numero/2);
	}
	else
		printf("O triplo de %.2f e %.2f", numero, numero*3);
  
  return 0;
}
