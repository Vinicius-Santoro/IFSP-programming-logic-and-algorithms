/*
    Nome: ex.7.7.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 7.
*/
    #include<stdio.h>
    #include<stdlib.h>

int ehPrimo ( int n);

int main() {

	int num[20];
	int i;

	for ( int i = 0; i < 20; i++ ) {

		num[i] = i+1;

	}

     for ( i = 1; i <= 20; i++ ) {

     	if ( ehPrimo( num[i-1] ) ) {

     		printf( "%d: eh primo\n", i );

		} else {

			printf( "%d: nao eh primo\n", i );
		}

     }

}//Fim do main.

int ehPrimo ( int n) {

    int i;
    int primo = 0;

    for ( i = 1; i <= n; i++ ) {

        if ( n % i == 0 ) {

            primo++;

        }


    }//Fim do For.

    if ( primo == 2 ) {

        return 1;

    } else {

        return 0;
    }

}//Fim da funcao ehPrimo.
