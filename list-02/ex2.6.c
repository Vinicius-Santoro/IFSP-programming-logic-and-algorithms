/*
    Nome: ex.2.6.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe um n�mero decimal e se esse 
	n�mero for maior que 20, imprimir sua metade, caso contr�rio,
	imprimir seu triplo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float numero;
   
//Recebendo o n�mero do usu�rio. 
    printf("Entre com um valor: ");
    scanf("%f", &numero);
    
//In�cio da estrutura condicional.
	if(numero > 20){
		printf("A metade de %.2f e %.2f", numero, numero/2);
	}
	else
		printf("O triplo de %.2f e %.2f", numero, numero*3);
  
  return 0;
}
