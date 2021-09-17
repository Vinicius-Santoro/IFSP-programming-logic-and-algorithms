/*
    Nome: ex1.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe o valor da base maior, menor e altura de um trapézio,
               e calcula a área desse trapézio.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int baseMaiorTrapezio;
    int baseMenorTrapezio;
    int alturaDoTrapezio;
    int areaDoTrapezio;

//Recebendo os valores das variáveis baseMaiorTrapezio e baseMenorTrapezio.
    printf("Valor da base maior: ");
    scanf("%d", &baseMaiorTrapezio);

    printf("Valor da base menor: ");
    scanf("%d", &baseMenorTrapezio);

    printf("Valor da altura: ");
    scanf("%d", &alturaDoTrapezio);

//Processamento do programa.
    areaDoTrapezio = ((baseMaiorTrapezio + baseMenorTrapezio) * alturaDoTrapezio)/2;

//Saída do programa.
    printf("Area = %d", areaDoTrapezio);

    return 0;
}
