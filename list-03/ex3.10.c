/*
    Nome: ex.3.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int numero;
	int i; //variável contadora.
	
	for(i = 45; i <= 60; i++){
		if(i % 4 == 0){
			printf("%d: divisivel\n", i);
		}else{
			printf("%d: indivisivel\n", i);
		}
	}
	
	return 0;
	
}//Fim do main.
