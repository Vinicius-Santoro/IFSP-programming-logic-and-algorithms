/*
    Nome: ex1.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor da diagonal maior e menor de um
               losango, e calcula a �rea desse losango.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    int diagonalMaiorLosango;
    int diagonalMenorLosango;
    int areaDoLosango;

//Recebendo os valores das vari�veis diagonalMaiorLosango e diagonalMenorLosango.
    printf("Valor a diagonal maior: ");
    scanf("%d", &diagonalMaiorLosango);

    printf("Valor a diagonal menor: ");
    scanf("%d", &diagonalMenorLosango);

//Processamento do programa.
    areaDoLosango = (diagonalMaiorLosango * diagonalMenorLosango)/2;

//Sa�da do programa.
    printf("Area = %d", areaDoLosango);

    return 0;
}
