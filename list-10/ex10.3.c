/*
    Nome: ex.10.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 3.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

typedef struct {
    int horas;
    int minutos;
    int segundos;
} Hora;

Hora gerarHora( int quantidadeSegundos );
void imprimirHora( const Hora *hora );

int main() {

    Hora hr;

    printf( "Segundos: " );
    scanf( "%d", &hr.segundos );

    hr = gerarHora(hr.segundos);
    imprimirHora(&hr);

    return 0;

}//Fim da função main.

Hora gerarHora( int quantidadeSegundos ) {

    Hora h;

    h.horas = (float) ( quantidadeSegundos / 3600 );
    h.minutos = (float) ( quantidadeSegundos -  h.horas * 3600 ) / 60;
    h.segundos = (float) ( quantidadeSegundos -  h.horas * 3600 - (  h.minutos  * 60 ) );

    return h;

}//Fim da função gerarHora

void imprimirHora( const Hora *hora ) {

     printf( "Hora correspondente: %02d:%02d:%02d\n", hora->horas, hora->minutos, hora->segundos);

}//Fim da função imprimirHora.
