/*
    Nome: ex.3.17c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 17.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int i = 0;
	int n1 = 1;
	int n2 = 0;
	int termo = 0;
	
	printf("Termo desejado: ");
	scanf("%d", &termo);
		
	for(i = 0; i < termo + 1; i++){
		n2 = n1 + n2;
		n1 = n2 - n1;
	}
	
	printf("Fibonacci de %d e %d", termo, n2);
	
	return 0;
	
}//Fim do main.
