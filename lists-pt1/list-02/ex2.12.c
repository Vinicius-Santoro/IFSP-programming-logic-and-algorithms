/*
    Nome: ex.2.12.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 12.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int mulher1;
    int mulher2;
    int homem1;
    int homem2;
    
//Recebendo os valores do usuário. 
    printf("Idade Homem 1: ");
    scanf("%d", &homem1);
    
    printf("Idade Homem 2: ");
    scanf("%d", &homem2);
     
    printf("Idade Mulher 1: ");
    scanf("%d", &mulher1);
    
    printf("Idade Mulher 1: ");
    scanf("%d", &mulher2);
    
//Para homem1 sendo mais velho e mulher1 sendo mais nova.
    if(homem1 > homem2 && mulher1 < mulher2){
    	printf("Idade homem mais velho + idade mulher"
		" mais nova: %d\n", homem1 + mulher1);
		
		printf("Idade homem mais novo * idade mulher"
		" mais velha: %d", homem2 * mulher2);
	}
//Para homem2 sendo mais velho e mulher2 sendo mais nova.
	else if(homem1 < homem2 && mulher1 > mulher2){
    	printf("Idade homem mais velho + idade mulher"
		" mais nova: %d\n", homem2 + mulher2);
		
		printf("Idade homem mais novo * idade mulher"
		" mais velha: %d", homem1 * mulher1);
	}

	return 0;
}
