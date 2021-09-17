/*
    Nome: ex.4.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 8.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>


int main(){

    int i = 0;
    int contPar = 0;
    int contImpar = 0;
	int array[5] = { 0 };
	int arrayPares[5] = { 0 };
	int arrayImpares[5] = { 0 };

	for (  i = 0; i < 5; i++  ) {
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
	}

	for (  i = 0; i < 5; i++  ) {
        if( array[i] % 2 == 0 ) {
            arrayPares[i] = array[i];
            contPar++;
        } else {
            arrayImpares[i] = array[i];
            contImpar++;
        }
	}

    printf( "Numeros pares:" );

    if( contPar >= 1 ) {
        for (  i = 0; i < 5; i++  ) {
            if( arrayPares[i] != 0 ) {
                printf( " %d", arrayPares[i] );
        }
	}

    puts( "." );

    } else {
        puts( " nao ha." );
    }

	printf( "Numeros impares:" );

	if( contImpar >= 1 ) {
         for (  i = 0; i < 5; i++  ) {
            if( arrayImpares[i] != 0 ) {
                printf( " %d", arrayImpares[i] );
        }
	}
    puts( "." );
    puts( "\n\n\n\n" );
	} else {
	     puts( " nao ha." );
	}

    return 0;

}//Fim do main.


