/*
    Nome: ex.3.12.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 3, exerc�cio 12.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int n1;
	int n2;
	int i;		      //vari�vel contadora.
	int contador = 0; //para retirar o lixo de mem�ria na sa�da.
	
	printf("N1: ");
	scanf("%d", &n1);
	
	printf("N2: ");
	scanf("%d", &n2);
	
	if(n1 <= n2){
		for(i = n1; i <= n2; i++){
			if(i % 2 == 0){
				contador++;
			}
		}
	}else if(n1 >= n2){
/*trocando os valores de n1 e n2 
sem uma vari�vel auxiliar */
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
		
		for(i = n1; i <= n2; i++){
			if(i % 2 == 0){
				contador++;
			}
		}
	}
	printf("Numeros pares entre %d e %d: %d", n1, n2, contador);
	return 0;
	
}//Fim do main.
