/*
    Nome: ex1.7.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe o valor inteiro de um lado de um quadrado e calcule o
               perímetro e a área deste quadrado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int ladoDoQuadrado;
    int areaDoQuadrado;
    int perimetroDoQuadrado;

//Recebendo o valor do lado do quadrado (entrada).
    printf("Valor do lado: ");
    scanf("%d", &ladoDoQuadrado);

//Processamento do programa.
    areaDoQuadrado = ladoDoQuadrado * ladoDoQuadrado;
    perimetroDoQuadrado = 4 * ladoDoQuadrado;

//Saída do programa.
    printf("Perimetro = %d\n", perimetroDoQuadrado);
    printf("Area = %d", areaDoQuadrado);

    return 0;
}
