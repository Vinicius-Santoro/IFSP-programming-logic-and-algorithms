/*
    Nome: ex.5.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 8.
*/
	#include<stdio.h>
	#include<stdlib.h>

int main(){

    int numero;
    int i;
    int j;
    int k;
    int valor;

    printf( "Numero entre 1 e 100: " );
    scanf ( "%d", &numero );

    if ( numero <= 0 || numero > 100 ) {

        printf( "Numero incorreto!" );

    } else {

        for ( i = 1; i <= numero; i++ ) {

            for ( j = 1; j <= numero ; j++ ) {

                for ( k = 0; k <= ( numero / 2); k++ ) {

                    if ( ( ( i == numero - k ) || ( i == k + 1 ) ) ||
                         ( ( j == numero - k ) || ( j == k + 1 ) ) ) {

                        valor = k + 1;
                        k = numero;
                    }
                }

                printf ( "%3d", valor );

                if ( j < numero )
                    printf (" ");
            }

            printf ("\n");
        }

    }
}//Fim do main.


