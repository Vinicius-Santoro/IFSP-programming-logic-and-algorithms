/*
    Nome: ex.3.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 3, exerc�cio 9.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int numero;
	int i; //vari�vel contadora.
	
	printf("Tabuada do Numero: ");
	scanf("%d", &numero);
	
	
	for(i = 0; i <= 10; i++){
		printf("%d x %d = %d\n", numero, i, numero*i);
	}
	
	return 0;
	
}//Fim do main.
