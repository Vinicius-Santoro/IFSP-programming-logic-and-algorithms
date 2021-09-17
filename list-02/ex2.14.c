/*
    Nome: ex.2.14.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 14.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){															

//Declaração da variáveis.
	float peso;
	float altura; 
		
	printf("Entre com seu peso em quilogramas: ");
	scanf("%f", &peso);															
	printf("Entre com sua altura em metros: ");
	scanf("%f", &altura);														
													
	if(peso/(altura*altura) >= 40)
		printf("IMC: %.2f\nMuito cuidado!!! Obesidade grau III!", peso/(altura*altura));
	else if(peso/(altura*altura) >= 35)
		printf("IMC: %.2f\nCuidado! Obesidade grau II!", peso/(altura*altura));
	else if(peso/(altura*altura) >= 30)
		printf("IMC: %.2f\nCuidado! Obesidade grau I!", peso/(altura*altura));
	else if(peso/(altura*altura) >= 25)
		printf("IMC: %.2f\nAtencao, voce esta acima de seu peso (sobrepeso)!", peso/(altura*altura));
	else if(peso/(altura*altura) >= 18.5)
		printf("IMC: %.2f\nParabens! Voce esta em seu peso normal!", peso/(altura*altura));
	else if(peso/(altura*altura) >= 17)
		printf("IMC: %.2f\nVoce esta abaixo do peso ideal!", peso/(altura*altura));
	else 
		printf("IMC: %.2f\nVoce esta muito abaixo do peso ideal!", peso/(altura*altura));

	return 0;		
}
