/*
    Nome: ex1.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe o valor da diagonal maior e menor de um
               losango, e calcula a área desse losango.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int diagonalMaiorLosango;
    int diagonalMenorLosango;
    int areaDoLosango;

//Recebendo os valores das variáveis diagonalMaiorLosango e diagonalMenorLosango.
    printf("Valor a diagonal maior: ");
    scanf("%d", &diagonalMaiorLosango);

    printf("Valor a diagonal menor: ");
    scanf("%d", &diagonalMenorLosango);

//Processamento do programa.
    areaDoLosango = (diagonalMaiorLosango * diagonalMenorLosango)/2;

//Saída do programa.
    printf("Area = %d", areaDoLosango);

    return 0;
}
