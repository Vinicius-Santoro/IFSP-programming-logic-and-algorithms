/*
    Nome: ex.2.15.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 15.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){															

//Declaração da variáveis.
	int idade; 
																
	printf("Entre com sua idade: ");
	scanf("%d", &idade);														
													
	if(idade <= 15)
		printf("Nao eleitor.");
	else if(idade >= 18 && idade <= 65)
		printf("Eleitor obrigatorio.");
	else 
		printf("Eleitor facultativo.");

	return 0;		
}
