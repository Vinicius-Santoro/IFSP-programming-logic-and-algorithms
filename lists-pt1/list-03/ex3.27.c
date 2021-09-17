/*
    Nome: ex.3.27c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 27.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso = 0.0;
    float soma = 0.0;
    float maior = 0.0;
    float media = 0.0;
    int quantidade = 0;
    int i = 1;
    int zero = 0;

    do {
        printf ( "Entre com o peso da pessoa %02d: ", i );
        scanf( "%f", &peso );
        i++;

        if( peso > 60 ) {
            soma += peso;
            quantidade++;
        }

        if( peso > maior ) {
            maior = peso;
        }

    } while ( peso >= 0 );

    if ( quantidade > 0 )
        media =  soma / quantidade;

    printf( "\n\nMedia dos pesos acima de 60kg: %.2f", media );
    printf( "\nA pessoa mais pesada possui %.2fkg\n\n", maior );

}//Fim do main.
