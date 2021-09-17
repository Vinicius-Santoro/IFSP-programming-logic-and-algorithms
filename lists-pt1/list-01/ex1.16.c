/*
    Nome: ex1.16.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor da base e altura de um tri�ngulo,
               e calcula a �rea desse tri�ngulo, usando n�meros decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float baseTriangulo;
    float alturaTriangulo;
    float areaTriangulo;

//Recebendo os valores das vari�veis baseTriangulo e alturaTriangulo.
    printf("Valor da base: ");
    scanf("%f", &baseTriangulo);

    printf("Valor do altura: ");
    scanf("%f", &alturaTriangulo);

//Processamento do programa.
    areaTriangulo = (baseTriangulo*alturaTriangulo)/2;

//Sa�da do programa.
    printf("Area = %.2f", areaTriangulo);

    return 0;
}
