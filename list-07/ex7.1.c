/*
    Nome: ex.7.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 1.
*/
	#include<stdio.h>
	#include<stdlib.h>

int absoluto( int n );

int main(){

    int n[5] = { 0 };

    for ( int i = 0; i < 5; i++ ) {
        printf( "n%d: ", i );
        scanf( "%d", &n[i] );
    }

    for ( int i = 0; i < 5; i++ ) {
        printf( "absoluto(%d) = %d\n", n[i], absoluto( n[i] ) );
    }

    return 0;

}//Fim do main.

int absoluto (int n) {
    if ( n < 0 ) {
        n = -n;
   }

   return n;

}



