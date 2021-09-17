/*
    Nome: ex1.18.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que calcula a área de um losango, usando dados do tipo "float".
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    float diagonalMaiorLosango;
    float diagonalMenorLosango;
    float areaLosango;

//Recebendo os valores das variáveis diagonalMaiorLosango e diagonalMenorLosango.
    printf("Valor a diagonal maior: ");
    scanf("%f", &diagonalMaiorLosango);

    printf("Valor a diagonal menor: ");
    scanf("%f", &diagonalMenorLosango);

//Processamento do programa.
    areaLosango = (diagonalMaiorLosango * diagonalMenorLosango)/2;

//Saída do programa.
    printf("Area = %.2f", areaLosango);

    return 0;
}
