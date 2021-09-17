/*
    Nome: ex1.13.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe dois números e calcule o valor das quatro operações, com saída do tipo float.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    float numero1;
    float numero2;
    float adicao;
    float subtracao;
    float multiplicacao;
    float divisao;

//Entrada do programa.
    printf("Primeiro numero: ");
    scanf("%f", &numero1);

    printf("Segundo numero: ");
    scanf("%f", &numero2);

//Processamento do programa.
    adicao = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

//Saída do programa.
    printf("%.2f + %.2f = %.2f\n", numero1, numero2, adicao);
    printf("%.2f - %.2f = %.2f\n", numero1, numero2, subtracao);
    printf("%.2f * %.2f = %.2f\n", numero1, numero2, multiplicacao);
    printf("%.2f / %.2f = %.2f", numero1, numero2, divisao);

    return 0;
}
