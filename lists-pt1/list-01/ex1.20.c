/*
    Nome: ex1.20.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que calcula a média aritmética de dois números inteiros.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
    int primeiroNumero;
    int segundoNumero;
    int mediaAritmetica;

//Recebendo o valor da variável raioDoCirculo.
    printf("Primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Segundo numero: ");
    scanf("%d", &segundoNumero);

//Processamento do programa.
    mediaAritmetica = (primeiroNumero + segundoNumero) / 2;

//Saída do programa.
    printf("Media aritmetica: %d", mediaAritmetica);

    return 0;
}
