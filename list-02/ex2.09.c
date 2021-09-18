/*
    Nome: ex.2.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 9.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
	int quantDeLados;
    float medidaDoLado;
   
//Recebendo os valores do usuário. 
    printf("Entre com a quantidade de lados: ");
    scanf("%d", &quantDeLados);
    
    printf("Entre com a medida do lado: ");
    scanf("%f", &medidaDoLado);
    
	if(quantDeLados == 3){
		printf("TRIANGULO de perimetro %.2f", 
		quantDeLados * medidaDoLado);
	}
	else if(quantDeLados == 4){
		printf("QUADRADO de area %.2f", 
		medidaDoLado * medidaDoLado);
	}
	else if(quantDeLados == 5){
		printf("PENTAGONO");
	}
	else
		printf("Poligono nao identificado");
		
  return 0;
}
