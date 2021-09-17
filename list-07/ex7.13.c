/*
    Nome: ex.7.13.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 13.
*/
    #include<stdio.h>
    #include<stdlib.h>

int classificaTrinca( int n1, int n2, int n3 );  //  Imprime em ordem crescente dois valores inteiros.

int main() {

    int l1[3];
    int l2[3];
    int l3[3];
    int i;

    for ( i = 0; i < 3; i++ ) {

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

        do {

            printf( "n2[%d]: ", i );
            scanf( "%d", &l3[i] );

            if( l3[i] <= 0 ) {
                printf( "Entre com um valor positivo!\n" );
            }

        } while( l3[i] <= 0);

    }//Fim do for.

    for ( i = 0; i < 3; i++ ) {

        int aux = classificaTrinca( l1[i], l2[i], l3[i] );

        switch( aux ) {

            case 1: printf( "%d, %d e %d: %d <= %d <= %d\n", l1[i], l2[i], l3[i], l1[i], l2[i], l3[i] ); break;

            case 2: printf( "%d, %d e %d: %d <= %d <= %d\n", l1[i], l2[i], l3[i], l1[i], l3[i], l2[i] ); break;

            case 3: printf( "%d, %d e %d: %d <= %d <= %d\n", l1[i], l2[i], l3[i], l2[i], l1[i], l3[i] ); break;

            case 4: printf( "%d, %d e %d: %d <= %d <= %d\n", l1[i], l2[i], l3[i], l2[i], l3[i], l1[i] ); break;

            case 5: printf( "%d, %d e %d: %d <= %d <= %d\n", l1[i], l2[i], l3[i], l3[i], l1[i], l2[i] ); break;

            case 6: printf( "%d, %d e %d: %d <= %d <= %d\n", l1[i], l2[i], l3[i], l3[i], l2[i], l1[i] ); break;

        }//Fim do switch case.

     }//Fim do For.

}//Fim da função main.

int classificaTrinca( int n1, int n2, int n3 ) {

    if ( n1 <= n2 && n2 <= n3 ) {

        return 1; // 1 - 2 - 3.
    }

    if ( n1 <= n3 && n3 <= n2 ) {

        return 2; // 1 - 3 - 2.
    }

    if ( n2 <= n1 && n1 <= n3 ) {

        return 3; // 2 - 1 - 3.
    }

    if ( n2 <= n3 && n3 <= n1 ) {

        return 4; // 2 - 3 - 1.
    }

    if ( n3 <= n1 && n1 <= n2 ) {

        return 5; // 3 - 1 - 2.
    }

    if ( n3 <= n2 && n2 <= n1 ) {

        return 6; // 3 - 2 - 1.
    }

}//Fim da função classificaDupla.


