/*
    Nome: ex.3.13.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 13.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int n1;
	int n2;
	int i; //variável contadora.
	int contadorPara2 = 0; //inicializei as variáveis com 0 para
	int contadorPara3 = 0; //limpar o lixo de memória na saída
	int contadorPara4 = 0; //do programa.
	
	printf("N1: ");
	scanf("%d", &n1);
	
	printf("N2: ");
	scanf("%d", &n2);

	if(n1 <= n2){
	//Para múltiplos de 2.
		for(i = n1; i <= n2; i++){
			if(i % 2 == 0){
			contadorPara2++;
			}
		}
	//Para múltiplos de 3.
		for(i = n1; i <= n2; i++){
			if(i % 3 == 0){
			contadorPara3++;
			}
		}
	//Para múltiplos de 4.
		for(i = n1; i <= n2; i++){
			if(i % 4 == 0){
			contadorPara4++;
			}
		}
	}else if(n1 >= n2){
	/*trocando os valores de n1 e n2 
	sem uma variável auxiliar */
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
		
	//Para múltiplos de 2.
		for(i = n1; i <= n2; i++){
			if(i % 2 == 0){
			contadorPara2++;
			}
		}
	//Para múltiplos de 3.
		for(i = n1; i <= n2; i++){
			if(i % 3 == 0){
			contadorPara3++;
			}
		}
	//Para múltiplos de 4.
		for(i = n1; i <= n2; i++){
			if(i % 4 == 0){
			contadorPara4++;
			}
		}
		
	}//Fim do else if.	
	
	printf("Multiplos de 2: %d\n", contadorPara2);
	printf("Multiplos de 3: %d\n", contadorPara3);
	printf("Multiplos de 4: %d\n", contadorPara4);
	return 0;
	
}//Fim do main.
