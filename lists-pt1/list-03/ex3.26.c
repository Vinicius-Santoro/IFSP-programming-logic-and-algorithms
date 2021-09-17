/*
    Nome: ex.3.26c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 26.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int maior;
	int menor;
	int numero;
	int acumulador;

	while( numero >= 0 ) {
		printf( "Entre com um valor: " );
		scanf( "%d", &numero );
		acumulador += numero;

		if ( acumulador < 1 ) {
                menor = numero = 0;
                break;
            }

        if ( numero < 0 ) {
            break;
        } else {
            if ( numero > maior ) {
                maior = numero;
            }

            if ( numero < menor ) {
                menor = numero;
            }
        }

	}//Fim do While.

	printf ( "\nMenor numero: %d\n", menor );
	printf ( "Maior numero: %d\n\n", maior );

	return 0;

}//Fim do main.
