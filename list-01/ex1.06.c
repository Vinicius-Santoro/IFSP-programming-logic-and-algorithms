/*
    Nome: ex1.6.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe dois números inteiros e calcule o valor das quatro operações.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    int numero1;
    int numero2;
    int adicao;
    int subtracao;
    int multiplicacao;
    int divisao;

//Recebendo os valores das variáveis numero1 e numero2.
    printf("Primeiro numero: ");
    scanf("%d", &numero1);

    printf("Segundo numero: ");
    scanf("%d", &numero2);

//Processamento do programa.
    adicao = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

//Saída do programa.
    printf("%d + %d = %d\n", numero1, numero2, adicao);
    printf("%d - %d = %d\n", numero1, numero2, subtracao);
    printf("%d * %d = %d\n", numero1, numero2, multiplicacao);
    printf("%d / %d = %d", numero1, numero2, divisao);

    return 0;
}
