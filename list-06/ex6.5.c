/*
    Nome: ex.6.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 6, exerc�cio 5.
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


