/*
    Nome: ex.3.21c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 3, exerc�cio 21.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int altura = 0;
	int cont = 0;
	int i;
	int j;

	//Observa��es:
	//1�: Os espa�os na primeira linha segue a ordem de tamanho -1.
	//Depois, vai decrementando de 1 em 1.

	//2�: Os prints s�o uma P.A de 2 em 2. 1, 3, 5, 7...
	//qnt de espa�os na primeira linha � TAMANHO - 1;
	//qnt de * � uma p.a de 2 em 2;

	while (cont < 4) {

	printf( "Altura: " ); scanf( "%d", &altura );

	if ( altura > 0 ) {

		for ( i = 1; i <= altura; i++ ) {
			for ( j = altura; j > i; j-- ) {
				printf( " " );
			}

            for ( j = 1; j <= i - 1; j++ ) {
                    printf( "*" );
            }

            for ( j = 1; j <= i; j++ ) {
                printf( "*" );
            }
            printf( "\n" );

        }
        printf( "\n" );
        printf( "\n" );
        printf( "\n" );
	}

	if ( altura < 0 ) {
        for ( i = 1; i > altura; i-- ) {
            for ( j = 1; j > i; j-- ) {
				printf( " " );
			}

            for ( j = altura; j < i - 1; j++ ) {
                printf( "*" );
            }

            for ( j = altura; j < i - 2; j++ ) {
                    printf( "*" );

            }

            printf( "\n" );

        }
        printf( "\n" );
        printf( "\n" );
        printf( "\n" );
	}
	cont++;
	}

    return 0;

}//Fim do main.
