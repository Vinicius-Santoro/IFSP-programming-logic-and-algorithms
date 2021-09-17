/*
    Nome: ex.6.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 6, exercício 1.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>


int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    float delta = 0.0;
    float raiz1 = 0.0;
    float raiz2 = 0.0;

    printf( "a: " );
    scanf( "%d", &a );

    printf( "b: " );
    scanf( "%d", &b );

    printf( "c: " );
    scanf( "%d", &c );

    if ( a == 0 ) {
        printf( "Nao existe equacao do segundo grau!" );
    } else {

        delta = (b*b) - 4 * a * c;
        raiz1 = (- b + sqrt(delta)) / 2 * a;
        raiz2 = (- b - sqrt(delta)) / 2 * a;

        if ( delta < 0 ) {
            printf( "Delta: %.2f\n", delta );
             printf( "S = {}" );
        } else {
            if ( raiz1 == raiz2  ) {
                printf( "Delta: %.2f\n", delta );
                printf( "S = {%.2f}", raiz1 );
            } else if ( raiz1 > raiz2 ) {
                printf( "Delta: %.2f\n", delta );
                printf( "S = {%.2f, %.2f}", raiz2, raiz1 );
            } else if ( raiz2 < raiz1 ){
                printf( "Delta: %.2f\n", delta );
                printf( "S = {%.2f, %.2f}", raiz1, raiz2 );
            }
        }
    }

}//Fim do main.


