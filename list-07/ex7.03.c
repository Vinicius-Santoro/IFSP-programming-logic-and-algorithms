/*
    Nome: ex.7.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 3.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>

float maiorNumero( float n1, float n2);

int main(){

    float n1[5];
    float n2[5];
    float maior;

    for ( int i = 0; i < 5; i++ ) {

        do {

            printf( "n1[%d]: ", i );
            scanf( "%f", &n1[i] );

            if( n1[i] <= 0 ) {
                printf( "Entre com um valor positivo!\n" );
            }

        } while( n1[i] <= 0);

        do {

            printf( "n2[%d]: ", i );
            scanf( "%f", &n2[i] );

            if( n2[i] <= 0 ) {
                printf( "Entre com um valor positivo!\n" );
            }

        } while( n2[i] <= 0);

    }

    for( int i = 0; i < 5; i++ ) {

        maior = maiorNumero( n1[i], n2[i] );
        printf( "%.2f, %.2f: ", n1[i], n2[i] );

        if ( maior == -1 ) {
            printf( "Eles sao iguais\n");
        } else {
            printf( "O maior valor e %.2f\n", maior);
        }
    }

    return 0;

}//Fim do main.

float maiorNumero( float n1, float n2) {
    if ( n1 == n2 ) {
        return -1;
    } else if ( n1 > n2) {
        return n1;
    }

    return n2;
}




