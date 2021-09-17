/*
    Nome: ex1.18.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que calcula a �rea de um losango, usando dados do tipo "float".
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float diagonalMaiorLosango;
    float diagonalMenorLosango;
    float areaLosango;

//Recebendo os valores das vari�veis diagonalMaiorLosango e diagonalMenorLosango.
    printf("Valor a diagonal maior: ");
    scanf("%f", &diagonalMaiorLosango);

    printf("Valor a diagonal menor: ");
    scanf("%f", &diagonalMenorLosango);

//Processamento do programa.
    areaLosango = (diagonalMaiorLosango * diagonalMenorLosango)/2;

//Sa�da do programa.
    printf("Area = %.2f", areaLosango);

    return 0;
}
