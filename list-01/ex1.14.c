/*
    Nome: ex1.14.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor decimal de um lado de um quadrado e calcule o
               per�metro e a �rea deste quadrado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float ladoDoQuadrado;
    float areaDoQuadrado;
    float perimetroDoQuadrado;

//Recebendo o valor do lado do quadrado (entrada).
    printf("Valor do lado: ");
    scanf("%f", &ladoDoQuadrado);

//Processamento do programa.
    areaDoQuadrado = ladoDoQuadrado * ladoDoQuadrado;
    perimetroDoQuadrado = 4 * ladoDoQuadrado;

//Sa�da do programa.
    printf("Perimetro = %.2f\n", perimetroDoQuadrado);
    printf("Area = %.2f", areaDoQuadrado);

    return 0;
}
