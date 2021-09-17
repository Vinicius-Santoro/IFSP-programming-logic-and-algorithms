/*
    Nome: ex.2.13.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 2, exercício 13.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){


//Declaração das variáveis.
    float nota1;
    float nota2;
    float notaOptativa;
    
//Recebendo os valores do usuário. 
    printf("Nota Av. 1: ");
    scanf("%f", &nota1);
    
    printf("Nota Av. 2: ");
    scanf("%f", &nota2);
     
    printf("Nota Optativa: ");
    scanf("%f", &notaOptativa);
    
    if(notaOptativa < 0){
    	
    if((nota1+nota2)/2 >= 6.0){
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Aprovado!");
    }
    else if((nota1+nota2)/2 >= 4.0){
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Exame.");
    }
    else{
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Reprovado...");
    }
	}//Fim do If.
	
	else if(notaOptativa > nota1){
		nota1 = notaOptativa;
		
	if((nota1+nota2)/2 >= 6.0){
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Aprovado!");
    }
    else if((nota1+nota2)/2 >= 4.0){
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Exame.");
    }
    else{
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Reprovado...");
    }
	}//Fim do If.
	
	else if(notaOptativa > nota2){
		nota2 = notaOptativa;
		
	if((nota1+nota2)/2 >= 6.0){
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Aprovado!"); 
    }
    else if((nota1+nota2)/2 >= 4.0){
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Exame.");
    }
    else{
    	printf("Media: %.2f\n", (nota1+nota2)/2);
    	printf("Reprovado...");
    }
	}//Fim do If.
	
	return 0;
}
