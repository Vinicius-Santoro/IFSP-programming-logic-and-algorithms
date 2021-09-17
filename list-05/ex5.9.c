/*
    Nome: ex.5.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 5, exercício 9.
*/
	#include<stdio.h>
	#include<stdlib.h>

int main() {

    int n;
    int v;
    int i;
    int j;
    int ai;
    int aj;
    int pi;
    int pj;

    printf( "Numero entre 1 e 100: " );
    scanf( "%d", &n );

    if( n > 0 && n <= 100 ) {

        int m[n][n];

        for ( i = 0, j = 0; i < n; i++, j++ ) {

            m[i][j] = 1;
        }

        if ( n % 2 == 0 ) {

            v = (n / 2);
            i = v - 1;
            j = v - 1;
            ai = i;
            aj = j;
            pi = v;
            pj = v;

        } else{

            v = (n / 2.0 + 0.5);
            ai = v - 2;
            aj = v - 2;
            pi = v;
            pj = v;
            i = ai;
            j = aj;
        }

        while ( i >= 0 ) {

            for ( v = 2, ++i; i <= pi; i++, v++ ) {

                 m[i][j] = v;
            }


            for ( ++pi, --i, ++j, --v, --v; j < pj; j++, v-- ) {

                 m[i][j] = v;
            }

            for ( v++, i--, ++pj; i >= ai; v++, i-- ) {

                m[i][j] = v;
            }

            for ( --ai, ++i, --j, --v, --v; j > aj; j--, v-- ) {

                m[i][j] = v;
            }

            --aj;

            i = ai;
            j = aj;

        }

        for ( i = 0; i < n; i++ ) {

            for ( j = 0; j < n - 1; j++ )
                printf ( "%3d ", m[i][j] );

            printf( "%3d\n", m[i][j] );

        }

        printf( "\n" );

    } else {

     printf( "Numero incorreto!" );

    }

    return 0;
}//Fim do main.


