/*
    Nome: ex.3.23c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 23.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	
	
	float acumulaNotas;
	float notas;
	float media;
	int i; 
		
	printf("Forneca a nota de 10 alunos: \n");
	
	for(i = 1; i < 11; i++){
		printf("Nota %02d: ", i);
		scanf("%f", &notas);
		acumulaNotas += notas;
	}
	
	media = acumulaNotas/10;
	
	printf("\nA media aritmetica das dez notas e: %.2f", media);
	
	return 0;
	
}//Fim do main.
