/*
    Nome: ex.6.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 6, exerc�cio 3.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>


int main(){

   float numero = 0;

    printf( "Numero: ");
    scanf( "%f", &numero );

    printf( "Maior inteiro mais proximo: %.2f\n", ceil(numero) );
    printf( "Menor inteiro mais proximo: %.2f", floor(numero));

    return 0;

}//Fim do main.


