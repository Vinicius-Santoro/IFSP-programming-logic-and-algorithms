/*
    Nome: ex.2.7.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 2, exerc�cio 7.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float numero1;
    float numero2;
   
//Recebendo o n�mero do usu�rio. 
    printf("Entre com um numero: ");
    scanf("%f", &numero1);
    
    printf("Entre com outro numero: ");
    scanf("%f", &numero2);
    

//In�cio da estrutura condicional.
	if((numero1 + numero2) > 10){
		printf("Os numeros fornecidos foram %.2f e %.2f", numero1, numero2);
	}
	else{
		printf("A subtracao entre %.2f e %.2f e igual a %.2f", 
			numero1, numero2, numero1 - numero2);
	}

  return 0;
}
