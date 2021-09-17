/*
    Nome: ex.7.14.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 14.
*/
    #include<stdio.h>
    #include<stdlib.h>

int classificaDupla( int n1, int n2 );  //  Imprime em ordem crescente dois valores inteiros.

int main() {

    int l1[5];
    int l2[5];

    for ( int i = 0; i < 5; i++ ) {

        do {

            printf( "n1[%d]: ", i );
            scanf( "%d", &l1[i] );

            if( l1[i] <= 0 ) {
                printf( "Entre com um valor positivo!\n" );
            }

        } while( l1[i] <= 0);

        do {

            printf( "n2[%d]: ", i );
            scanf( "%d", &l2[i] );

            if( l2[i] <= 0 ) {
                printf( "Entre com um valor positivo!\n" );
            }

        } while( l2[i] <= 0);

    }

     for ( int i = 0; i < 5; i++ ) {

        int aux = classificaDupla( l1[i], l2[i] );

        if ( i % 2 == 0  ) {

            if ( aux == 1 ) {

                printf( "%d e %d: %d <= %d\n", l1[i], l2[i], l1[i], l2[i] );

            }

            if ( aux == 2 ) {

                printf( "%d e %d: %d <= %d\n", l1[i], l2[i], l2[i], l1[i] );
            }
        } else {

            if ( aux == 1 ) {

                printf( "%d e %d: %d >= %d\n", l1[i], l2[i], l2[i], l1[i] );

            }

            if ( aux == 2 ) {

                printf( "%d e %d: %d >= %d\n", l1[i], l2[i], l1[i], l2[i] );

            }
        }

     }//Fim do For.

}//Fim da função main.

int classificaDupla( int n1, int n2 ) {

    if ( n1 <= n2 ) {

        return 1;
    }

    if ( n2 <= n1 ) {

        return 2;
    }

}//Fim da função classificaDupla.


