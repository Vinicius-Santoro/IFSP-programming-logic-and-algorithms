/*
    Nome: ex.3.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 3, exerc�cio 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int numero;
	int i; //vari�vel contadora.
	
	printf("Forneca um numero maior ou igual a zero: ");
	scanf("%d", &numero);
	
	if(numero >= 0){
		for(i = 0; i <= numero; i++){
		printf("%d ", i);
		}
	}else{
		printf("Valor incorreto (negativo)");
	}
	
	return 0;
	
}//Fim do main.
