/*
    Nome: ex.2.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que exibe três números em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int n1;
    int n2;
    int n3;
   
//Recebendo os valores do usuário. 
    printf("N1: ");
    scanf("%d", &n1);
    
    printf("N2: ");
    scanf("%d", &n2);
    
    printf("N3: ");
    scanf("%d", &n3);
    
	if (n3 > n1)
    	if (n1 > n2)
    	printf("%d >= %d >= %d\n", n3, n1, n2);
    		else if (n2 < n3)
    		printf("%d >= %d >= %d\n", n3, n2, n1);
  	if (n1 > n2)
    	if (n2 > n3)
    	printf("%d >= %d >= %d\n", n1, n2, n3);
    		else if (n3 < n1)
    		printf("%d >= %d >= %d\n", n1, n3, n2);
 	if (n1 < n2)
   	 	if (n3 < n1)
    	printf("%d >= %d >= %d\n", n2, n1, n3);
    		else if (n3 < n2)
    		printf("%d >= %d >= %d\n", n2, n3, n1);
  
  return 0;
}
