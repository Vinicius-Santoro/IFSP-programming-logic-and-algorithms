/*
    Nome: ex.4.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 4, exercício 10.
*/
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>


int main(){

    int i = 0;
    int j = 0;
    int num = 0;
    int contMaior = 0;
    int array[5] = { 0 };
    int arrayMaiores[5] = { 0 };

    for ( i = 0; i < 5; i++ ) {
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }

    printf( "Copiar maiores que: " );
    scanf( "%d", &num );

    for (  i = 0; i < 5; i++  ) {
        if( array[i] > num ) {
            arrayMaiores[i] = array[i];
            contMaior++;
        }
	}

	if( contMaior >= 1 ) {
        for (  i = 0; i < 5; i++  ) {
            if( arrayMaiores[i] != 0 ) {
                printf( "arrayCopia[%d] = %d\n", j , arrayMaiores[i]);
                j++;
            }
        }
	} else {
	    puts( "Nao houve copia!" );
	}

    return 0;

}//Fim do main.


