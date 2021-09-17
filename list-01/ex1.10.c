/*
    Nome: ex1.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe o valor da base maior, menor e altura de um trap�zio,
               e calcula a �rea desse trap�zio.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    int baseMaiorTrapezio;
    int baseMenorTrapezio;
    int alturaDoTrapezio;
    int areaDoTrapezio;

//Recebendo os valores das vari�veis baseMaiorTrapezio e baseMenorTrapezio.
    printf("Valor da base maior: ");
    scanf("%d", &baseMaiorTrapezio);

    printf("Valor da base menor: ");
    scanf("%d", &baseMenorTrapezio);

    printf("Valor da altura: ");
    scanf("%d", &alturaDoTrapezio);

//Processamento do programa.
    areaDoTrapezio = ((baseMaiorTrapezio + baseMenorTrapezio) * alturaDoTrapezio)/2;

//Sa�da do programa.
    printf("Area = %d", areaDoTrapezio);

    return 0;
}
