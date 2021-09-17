/*
    Nome: ex.3.15c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 15.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int n; //numero.
	int i;
	int numero;
	int fat;
	
	printf("Numero: ");
	scanf("%d", &n);
	
	numero = n;
	
	if(n > 0){
		for(fat = 1; n > 1; n = n - 1){      
    	fat = fat * n;
  	    }	
  	numero;
    printf("\n%d! = %d", numero, fat);
	}else{
	
	printf("Nao ha fatorial de numero negativo.");
	
	}//Fim do if.	
	
	return 0;
	
}//Fim do main.
