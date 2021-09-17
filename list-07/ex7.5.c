/*
    Nome: ex.7.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 5.
*/
    #include<stdio.h>
    #include<stdlib.h>

int ehPar( int n );
int ehDivisivel( int dividendo, int divisor );

int main(){

    int n1[5];
    int n2[5];

    for ( int i = 0; i < 5; i++ ) {

        printf( "n1[%d]: ", i );
        scanf( "%d", &n1[i] );

        printf( "n2[%d]: ", i );
        scanf( "%d", &n2[i] );

    }

    for( int i = 0; i < 5; i++ ) {

        if ( ehPar( n1[i] ) && ehDivisivel( n1[i], n2[i] ) ) {             /* Se Sim && Sim */

            printf( "%d eh par e %d eh divisivel por %d\n", n1[i], n1[i], n2[i] );

        } else if ( !ehPar( n1[i] ) && !ehDivisivel( n1[i], n2[i] ) ) {    /* Se Não && Não */

            printf( "%d eh impar e %d nao eh divisivel por %d\n", n1[i], n1[i], n2[i] );

        } else if ( !ehPar( n1[i] ) && ehDivisivel( n1[i], n2[i] )  ) {    /* Se Não && Sim */

            printf( "%d eh impar e %d eh divisivel por %d\n", n1[i], n1[i], n2[i] );
        }

    }//Fim do For.

    return 0;

}//Fim do main.

int ehPar( int n ){

    if( n % 2 == 0 ) {

        return 1;

    } else {

        return 0;
    }

}//Fim da funcao ehPar.

int ehDivisivel( int dividendo, int divisor ) {

    if( dividendo % divisor == 0 ) {

        return 1;

    } else {

        return 0;
    }

}//Fim da funcao ehDivisivel.
