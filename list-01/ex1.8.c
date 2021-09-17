/*
    Nome: ex1.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor da largura e da altura de um ret�ngulo,
               e calcula a �rea e o per�metro deste ret�ngulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    int larguraDoRetangulo;
    int alturaDoRetangulo;
    int areaDoRetangulo;
    int perimetroDoRetangulo;

//Recebendo os valores das vari�veis larguraDoRetagulo e alturadoRetangulo.
    printf("Valor do largura: ");
    scanf("%d", &larguraDoRetangulo);

    printf("Valor do altura: ");
    scanf("%d", &alturaDoRetangulo);

//Processamento do programa.
    perimetroDoRetangulo = (2*larguraDoRetangulo) + (2*alturaDoRetangulo);
    areaDoRetangulo = larguraDoRetangulo*alturaDoRetangulo;

//Sa�da do programa.
    printf("Perimetro = %d\n", perimetroDoRetangulo);
    printf("Area = %d", areaDoRetangulo);

    return 0;
}
