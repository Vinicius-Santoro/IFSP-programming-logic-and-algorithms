/*
    Nome: ex.7.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 8.
*/
    #include<stdio.h>
    #include<stdlib.h>

int lePositivo( void );
int somaDivisores( int n );
int saoAmigos ( int n1, int n2 );

int main(){

    int l1[5];
    int l2[5];

    for ( int i = 0; i < 5; i++ ) {

        printf( "n1[%d]: ", i );

        l1[i] = lePositivo();

        printf( "n2[%d]: ", i );

        l2[i] = lePositivo();

    }

    for ( int i = 0; i < 5; i++  ) {

        if ( saoAmigos ( l1[i], l2[i] )  ){

           printf( "%d e %d sao amigos\n", l1[i], l2[i] );

        } else {

            printf( "%d e %d nao sao amigos\n", l1[i], l2[i] );

        }


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

}//Fim da funcao lePositivo1.

int somaDivisores( int n ) {

    int i;
    int acumula = 0;

    for ( i = 1; i < n; i++ ) {

        if ( ( n % i ) == 0 ) {

            acumula += i;
        }

    }//Fim do for

    return acumula;

}//Fim da funcao somaDivisores.

int saoAmigos ( int n1, int n2 ) {

    if ( somaDivisores(n1) == n2 && somaDivisores(n2) == n1 ) {

        return 1;

    } else {

        return 0;
    }

}//Fim da funcao saoAmigos.

