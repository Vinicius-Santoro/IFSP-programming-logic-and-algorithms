/*
    Nome: ex.3.14c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 14.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n1;
	int n2;
	int i; //variável contadora.
	int acumulador = 0;

	printf("N1: ");
	scanf("%d", &n1);

	printf("N2: ");
	scanf("%d", &n2);

	if(n1 <= n2){
		for(i = n1; i <= n2; i++){
			acumulador += i;
		}
	}else if(n1 >= n2){
	/*trocando os valores de n1 e n2
	sem uma variável auxiliar */
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;

		for(i = n1; i <= n2; i++){
			acumulador += i;
		}
	}//Fim do else if.

	printf("Somatorio entre %d e %d: %d\n", n1, n2, acumulador);

	return 0;

}//Fim do main.
