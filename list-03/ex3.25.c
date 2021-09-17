/*
    Nome: ex.3.25c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 25.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	
	
	int i = 1;
	float numero = 0.0;
	float somatorio = 0.0;
	float media = 0.0;
	 
	while(numero >= 0){
		printf("Entre com um valor: ");
		scanf("%f", &numero);
		
		if(numero < 0){
			i--;
			break;
		}else{
			somatorio += numero;
			i++;
		}
	media = somatorio/(i-1);
	}
		
	printf("\nSomatorio: %.2f\n", somatorio);
	printf("Media: %.2f\n", media);
	printf("Quantidade: %d", i);
	
	return 0;
	
}//Fim do main.
