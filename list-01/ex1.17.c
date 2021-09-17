/*
    Nome: ex1.17.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que calcula a �rea do trap�zio, usando dados do tipo "float".
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float baseMaiorTrapezio;
    float baseMenorTrapezio;
    float alturaTrapezio;
    float areaTrapezio;

//Recebendo os valores das vari�veis baseMaiorTrapezio, baseMenorTrapezio e alturaTrapezio.
    printf("Valor da base maior: ");
    scanf("%f", &baseMaiorTrapezio);

    printf("Valor da base menor: ");
    scanf("%f", &baseMenorTrapezio);

    printf("Valor da altura: ");
    scanf("%f", &alturaTrapezio);

//Processamento do programa.
    areaTrapezio = ((baseMaiorTrapezio + baseMenorTrapezio) * alturaTrapezio)/2;

//Sa�da do programa.
    printf("Area = %.2f", areaTrapezio);

    return 0;
}
