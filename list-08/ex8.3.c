/*
    Nome: ex.8.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 8, exercício 3.
*/
    #include<stdio.h>
    #include<stdlib.h>

void decompoeTempo( int totalSegundos, int *horas, int *minutos, int *segundos );

int main() {

    int horasMain = 0;
    int minutosMain = 0;
    int segundosMain = 0;

    printf( "Total de segundos: " );
    scanf( "%d", &segundosMain );

    printf( "%d segundo(s) corresponde(m) a:\n", segundosMain );

    decompoeTempo( segundosMain, &horasMain, &minutosMain, &segundosMain );

    printf( "    %d hora(s)\n", horasMain );
    printf( "    %d minuto(s)\n", minutosMain );
    printf( "    %d segundo(s)\n", segundosMain );

}//Fim da função main.

void decompoeTempo( int totalSegundos, int *horas, int *minutos, int *segundos ) {

// 1 hora tem 3600 segundos.
// 1 minuto tem 60 segundos.

    *horas = totalSegundos / 3600;
    *minutos = ( totalSegundos -  *horas * 3600 ) / 60;
    *segundos = ( totalSegundos -  *horas * 3600 - ( *minutos  * 60 ) );

}//Fim da função trocar.


