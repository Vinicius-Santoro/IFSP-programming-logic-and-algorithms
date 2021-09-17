/*
    Nome: ex.2.18.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 18.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	float a; //primeiro numero.
	float b; //segundo numero.
	char opc; //opcao do usuario.
	
	printf("N1: ");
	scanf("%f", &a);
	
	printf("N2: ");
	scanf("%f", &b);
	
	printf("Escolha uma operacao de acordo com o menu\n"
		   "	+) Adicao;\n"
	       "	-) Subtracao;\n" 
	       "	*) Multiplicacao;\n" 
	       "	/) Divisao.\n"
	       "Operacao: "); scanf(" %c", &opc);
	
	switch(opc){
		
	case '+':
			printf("%.2f + %.2f = %.2f\n", a, b, a+b);
			break;
				
	case '-': 
			printf("%.2f - %.2f = %.2f\n", a, b, a-b);
			break;
	
	case '*':
			printf("%.2f * %.2f = %.2f", a, b, a*b);
			break;
	
	case '/':
			printf("%.2f / %.2f = %.2f\n", a, b, a/b);
			break;
			
	default: 
			printf("Opcao invalida!"); 
				break; 		 
					
	}//Fim do Switch.
	
}//Fim do Programa.


