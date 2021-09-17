/*
    Nome: ex.6.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 6, exercício 5.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>


int main(){

   float numero = 0;

    printf( "Numero: ");
    scanf( "%f", &numero );

    if ( numero >=0 ) {
        printf( "Raiz quadrada de %.2f: %.2f\n", numero, sqrt(numero) );
    } else {
         printf( "Quadrado de %.2f: %.2f\n", numero, numero*numero );
    }

    return 0;

}//Fim do main.


