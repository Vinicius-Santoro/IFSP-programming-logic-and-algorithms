/*
    Nome: ex.7.6.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 6.
*/
    #include<stdio.h>
    #include<stdlib.h>

int lePositivo( void );
int somaDivisores( int n );

int main(){

    int n[5];

    for ( int i = 0; i < 5; i++  ) {

        printf( "n[%d]: ", i );

        n[i] = lePositivo();

    }//Fim do For.

    for ( int i = 0; i < 5; i++  ) {

            printf( "Soma dos divisores de %d: %d\n", n[i], somaDivisores ( n[i] ) );

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

int somaDivisores( int n ) {

    int i;
    int acumula = 0;

    for ( i = 1; i < n; i++ ) {

        if ( ( n % i ) == 0 ) {

            acumula += i;
        }

    }//Fim do for

    return acumula;

}//Fim da funcao somaDivisores
