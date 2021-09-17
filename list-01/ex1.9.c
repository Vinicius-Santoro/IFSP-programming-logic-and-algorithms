/*
    Nome: ex1.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor da base e altura de um tri�ngulo,
               e calcula a �rea desse tri�ngulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    int baseDoTriangulo;
    int alturaDoTriangulo;
    int areaDoTriangulo;

//Recebendo os valores das vari�veis baseDoTriangulo e alturaDoTriangulo.
    printf("Valor da base: ");
    scanf("%d", &baseDoTriangulo);

    printf("Valor do altura: ");
    scanf("%d", &alturaDoTriangulo);

//Processamento do programa.
    areaDoTriangulo = (baseDoTriangulo*alturaDoTriangulo)/2;

//Sa�da do programa.
    printf("Area = %d", areaDoTriangulo);

    return 0;
}
