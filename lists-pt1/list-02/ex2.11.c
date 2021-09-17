/*
    Nome: ex.2.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 11.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int a; //ladoA
    int b; //ladoB
    int c; //ladoC
    
//Recebendo os valores do usuário. 
    printf("alfa: ");
    scanf("%d", &a);
    
    printf("beta: ");
    scanf("%d", &b);
    
    printf("gama: ");
    scanf("%d", &c);
    
   if((a + b + c) != 180){
    printf("As medidas fornecidas dos angulos nao" 
	" representam um triangulo valido!");
	}
	else{
	if(a == 90 || b == 90 || c == 90)
		printf("Triangulo RETANGULO");
	else if(a > 90 || b > 90 || c > 90)
		printf("Triangulo OBTUSANGULO");
	else if(a < 90 && b < 90 && c < 90)
		printf("Triangulo ACUTANGULO");
	}
		
  return 0;
}
