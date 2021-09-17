/*
    Nome: ex1.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe o valor da base e altura de um triângulo,
               e calcula a área desse triângulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int baseDoTriangulo;
    int alturaDoTriangulo;
    int areaDoTriangulo;

//Recebendo os valores das variáveis baseDoTriangulo e alturaDoTriangulo.
    printf("Valor da base: ");
    scanf("%d", &baseDoTriangulo);

    printf("Valor do altura: ");
    scanf("%d", &alturaDoTriangulo);

//Processamento do programa.
    areaDoTriangulo = (baseDoTriangulo*alturaDoTriangulo)/2;

//Saída do programa.
    printf("Area = %d", areaDoTriangulo);

    return 0;
}
