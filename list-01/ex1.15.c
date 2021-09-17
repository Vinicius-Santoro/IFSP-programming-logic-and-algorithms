/*
    Nome: ex1.15.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe o valor da largura e da altura de um retângulo,
               e calcula a área e o perímetro deste retângulo, agora, usando "float".
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    float larguraDoRetangulo;
    float alturaDoRetangulo;
    float areaDoRetangulo;
    float perimetroDoRetangulo;

//Recebendo os valores das variáveis larguraDoRetagulo e alturadoRetangulo.
    printf("Valor do largura: ");
    scanf("%f", &larguraDoRetangulo);

    printf("Valor do altura: ");
    scanf("%f", &alturaDoRetangulo);

//Processamento do programa.
    perimetroDoRetangulo = (2*larguraDoRetangulo) + (2*alturaDoRetangulo);
    areaDoRetangulo = larguraDoRetangulo*alturaDoRetangulo;

//Saída do programa.
    printf("Perimetro = %.2f\n", perimetroDoRetangulo);
    printf("Area = %.2f", areaDoRetangulo);

    return 0;
}
