/*
    Nome: ex1.8.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe o valor da largura e da altura de um retângulo,
               e calcula a área e o perímetro deste retângulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int larguraDoRetangulo;
    int alturaDoRetangulo;
    int areaDoRetangulo;
    int perimetroDoRetangulo;

//Recebendo os valores das variáveis larguraDoRetagulo e alturadoRetangulo.
    printf("Valor do largura: ");
    scanf("%d", &larguraDoRetangulo);

    printf("Valor do altura: ");
    scanf("%d", &alturaDoRetangulo);

//Processamento do programa.
    perimetroDoRetangulo = (2*larguraDoRetangulo) + (2*alturaDoRetangulo);
    areaDoRetangulo = larguraDoRetangulo*alturaDoRetangulo;

//Saída do programa.
    printf("Perimetro = %d\n", perimetroDoRetangulo);
    printf("Area = %d", areaDoRetangulo);

    return 0;
}
