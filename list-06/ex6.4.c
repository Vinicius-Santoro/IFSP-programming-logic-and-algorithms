/*
    Nome: ex.6.4.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 6, exercício 4.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>


int main(){

   float numero = 0;

    printf( "Numero: ");
    scanf( "%f", &numero );

    printf( "Valor absoluto: %.2f\n", fabs(numero) );

    return 0;

}//Fim do main.


