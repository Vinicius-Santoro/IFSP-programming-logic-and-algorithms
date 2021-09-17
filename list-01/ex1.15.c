/*
    Nome: ex1.15.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor da largura e da altura de um ret�ngulo,
               e calcula a �rea e o per�metro deste ret�ngulo, agora, usando "float".
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float larguraDoRetangulo;
    float alturaDoRetangulo;
    float areaDoRetangulo;
    float perimetroDoRetangulo;

//Recebendo os valores das vari�veis larguraDoRetagulo e alturadoRetangulo.
    printf("Valor do largura: ");
    scanf("%f", &larguraDoRetangulo);

    printf("Valor do altura: ");
    scanf("%f", &alturaDoRetangulo);

//Processamento do programa.
    perimetroDoRetangulo = (2*larguraDoRetangulo) + (2*alturaDoRetangulo);
    areaDoRetangulo = larguraDoRetangulo*alturaDoRetangulo;

//Sa�da do programa.
    printf("Perimetro = %.2f\n", perimetroDoRetangulo);
    printf("Area = %.2f", areaDoRetangulo);

    return 0;
}
