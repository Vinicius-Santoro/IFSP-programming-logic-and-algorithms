/*
    Nome: ex.3.20c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 3, exerc�cio 20.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int j;
	char e = ' ';	//Vari�vel de espa�o.

//Primeiro desenho.
	for ( i = 1; i <= 5; i++ ) {
		for ( j = 1; j <= i; j++ ) {
			printf( "*" );
		}
	printf( "\n" );
	}

	printf( "\n" );

//Segundo desenho.
	for ( i = 5; i >= 0; i-- ) {
		for ( j = 1; j <= i; j++ ) {
			printf( "*" );
		}
	printf( "\n" );
	}


//Terceiro desenho.
    for ( i = 1; i <= 5; i++ ) {
        for ( j = 5; j > 0; j-- ) {
            if ( j > i ) {
                printf( " " );
            } else {
                printf( "*" );
            }
        }
    printf( "\n" );
    }

	printf( "\n" );

//Quarto desenho.
    for ( i = 1; i <= 5; i++ ) {
        for ( j = 1; j <= 5; j++ ) {
            if ( j < i ) {
                printf( " " );
            } else {
                printf( "*" );
            }
        }
    printf( "\n" );
    }

	return 0;

}//Fim do main.

