/*
    Nome: ex1.7.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor inteiro de um lado de um quadrado e calcule o
               per�metro e a �rea deste quadrado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    int ladoDoQuadrado;
    int areaDoQuadrado;
    int perimetroDoQuadrado;

//Recebendo o valor do lado do quadrado (entrada).
    printf("Valor do lado: ");
    scanf("%d", &ladoDoQuadrado);

//Processamento do programa.
    areaDoQuadrado = ladoDoQuadrado * ladoDoQuadrado;
    perimetroDoQuadrado = 4 * ladoDoQuadrado;

//Sa�da do programa.
    printf("Perimetro = %d\n", perimetroDoQuadrado);
    printf("Area = %d", areaDoQuadrado);

    return 0;
}
