/*
    Nome: ex.2.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    float a;
    float b;
    float c;
   
//Recebendo os valores do usuário. 
    printf("a: ");
    scanf("%f", &a);
    
    printf("b: ");
    scanf("%f", &b);
    
    printf("c: ");
    scanf("%f", &c);
    
   if(a >= b + c || b >= c + a || c >= a + b){
    printf("As medidas fornecidas dos lados nao" 
	" representam um triangulo valido!");
	}
	else{
	if(a == b || b == c)
		printf("Triangulo EQUILATERO");
	else if(a == b || a == c)
		printf("Triangulo ISOSCELES");
	else
		printf("Triangulo ESCALENO");
	}
		
  return 0;
}
