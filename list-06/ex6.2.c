/*
    Nome: ex.6.2.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 6, exerc�cio 2.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>


int main(){

   float base = 0;
   float expoente = 0;

   printf( "Base: " );
   scanf( "%f", &base );

   printf( "Expoente: " );
   scanf( "%f", &expoente );

    printf( "%.2f ^ %.2f = %.2f", base, expoente, pow(base, expoente) );


}//Fim do main.


