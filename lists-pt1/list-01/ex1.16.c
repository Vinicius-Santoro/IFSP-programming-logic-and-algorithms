/*
    Nome: ex1.16.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe o valor da base e altura de um triângulo,
               e calcula a área desse triângulo, usando números decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    float baseTriangulo;
    float alturaTriangulo;
    float areaTriangulo;

//Recebendo os valores das variáveis baseTriangulo e alturaTriangulo.
    printf("Valor da base: ");
    scanf("%f", &baseTriangulo);

    printf("Valor do altura: ");
    scanf("%f", &alturaTriangulo);

//Processamento do programa.
    areaTriangulo = (baseTriangulo*alturaTriangulo)/2;

//Saída do programa.
    printf("Area = %.2f", areaTriangulo);

    return 0;
}
