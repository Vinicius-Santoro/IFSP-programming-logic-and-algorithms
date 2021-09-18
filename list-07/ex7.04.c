/*
    Nome: ex.7.4.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 4.
*/
	#include<stdio.h>
	#include<stdlib.h>

int lePositivo( void );
int somatorio( int n );

int main(){

    int n[5];

    for ( int i = 0; i < 5; i++  ) {

        printf( "n[%d]: ", i );

        n[i] = lePositivo();

    }//Fim do For.

    for ( int i = 0; i < 5; i++  ) {

            printf( "Somatorio de 1 a %d: %d\n", n[i], somatorio ( n[i] ) );

    }//Fim do For.

}//Fim do main.

int lePositivo( void ) {

    int m;

    do {

        scanf( "%d", &m );

        if( m <= 0 ) {
            printf( "Entre com um valor positivo:\n" );
        }

    } while( m <= 0);

    return m;

}//Fim da funcao lePositivo.

int somatorio( int n ) {

    int soma = 0;

    for ( int i = 1; i <= n; i++  ) {

        soma += i;
    }

    return soma;

}//Fim da funcao somatorio.

