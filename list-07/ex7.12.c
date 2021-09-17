/*
    Nome: ex.7.12.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 12.
*/
    #include<stdio.h>
    #include<stdlib.h>

void classificaDupla( int n1, int n2 );  //  Imprime em ordem crescente dois valores inteiros.

int main() {

    int l1[3];
    int l2[3];

    for ( int i = 0; i < 3; i++ ) {

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

     for ( int i = 0; i < 3; i++ ) {

         classificaDupla( l1[i], l2[i] );

     }//Fim do For.

}//Fim da função main.

void classificaDupla( int n1, int n2 ) {

    if ( n1 <= n2 ) {

        printf( "%d e %d: %d <= %d\n", n1, n2, n1, n2 );

    } else {

         printf( "%d e %d: %d <= %d\n", n1, n2, n2, n1 );
    }

    return; //Quando é void, o return é vazio.

}//Fim da função classificaDupla.


