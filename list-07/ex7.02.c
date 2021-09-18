/*
    Nome: ex.7.2.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descriçăo: Capítulo 7, exercício 2.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>

float areaCirculo( float raio );
float circunferenciaCirculo( float raio );

const float PI = acos(-1);

int main(){


    float raio = 0.0;

    printf( "Raio: " );
    scanf( "%f", &raio );

    printf( "Area = %.2f\n", areaCirculo( raio ) );
    printf( "Circunferencia = %.2f", circunferenciaCirculo( raio ) );


    return 0;

}//Fim do main.

float areaCirculo( float raio ) {

    return PI * pow(raio, 2);
}

float circunferenciaCirculo( float raio ) {

    return 2 * PI * raio;

}



