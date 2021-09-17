/*
    Nome: ex.2.17.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 17.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	float celsius;
    float fahrenheit;
	char opc; //opcao do usuario.
	
	printf("Escolha uma operacao de acordo com o menu:\n"
		   "	C) Celsius -> Fahrenheit;\n"
	       "	F) Fahrenheit -> Celsius.\n"
	       "Opcao: "); scanf(" %c", &opc);
	
	switch(opc){
		
	case 'C':
			printf("Entre com a temperatura em graus Celsius: ");
			scanf("%f", &celsius);
			printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit",
            celsius, 1.8 * celsius + 32);
			break;
				
	case 'F': 
			printf("Entre com a temperatura em graus Fahrenheit: ");
			scanf("%f", &fahrenheit);
			printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius",
            fahrenheit, (fahrenheit - 32)/1.8);
			break;
			
	default: 
			printf("Opcao invalida!"); 
				break; 		 
					
	}//Fim do Switch.
	
}//Fim do Programa.


