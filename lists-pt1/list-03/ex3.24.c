/*
    Nome: ex.3.24c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 24.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	
	
	int idade = 0;
	int i = 1;
	int idadeMenos = 0;
	int idadeMais = 0;
	 
	while(idade >= 0){
		printf("Idade da pessoa %02d: ", i);
		scanf("%d", &idade);
		if(idade < 21){
			idadeMenos++;
		}else if(idade > 50){
			idadeMais++;
		}
	i++;
	}
	
	printf("Total de pessoas menores de 21 anos: %d\n", idadeMenos-1);
	printf("Total de pessoas com mais de 50 anos: %d\n", idadeMais);
	
	return 0;
	
}//Fim do main.
