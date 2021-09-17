/*
    Nome: ex.8.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 8, exercício 5.
*/
    #include<stdio.h>
    #include<stdlib.h>

void produtoInterno( const double *a1, const double *a2, double *pi, int n );

int main() {

    const double a1Main[5] = { 0 };
    const double a2Main[5] = { 0 };
    double piMain[5];
    int nMain = 5;

    for ( int i = 0; i < nMain; i++ ) {

        printf( "a1[%d]: ", i );
        scanf( "%lf", &a1Main[i] );

    }

    for ( int i = 0; i < nMain; i++ ) {

        printf( "a2[%d]: ", i );
        scanf( "%lf", &a2Main[i] );

    }

    produtoInterno( a1Main, a2Main, piMain, nMain);

    for ( int i = 0; i < nMain; i++ ) {

         printf( "%.2lf x %.2lf = %.2lf\n", a1Main[i], a2Main[i], piMain[i] );
    }

}//Fim da função main.

void produtoInterno( const double *a1, const double *a2, double *pi, int n ) {

    for ( int i = 0; i < n; i++ ) {

        pi[i] = a1[i] * a2[i];

    }

}//Fim da função produtoInterno.

