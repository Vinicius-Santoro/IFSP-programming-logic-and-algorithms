/*
    Nome: ex1.21.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que calcula e exibe o sucessor e o antecessor do número
               inteiro lido.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
    int numero;
    int sucessorDoNumero;
    int antecessorDoNumero;

//Recebendo o valor da variável numero.
    printf("Forneca um numero inteiro: ");
    scanf("%d", &numero);

//Processamento do programa.
   sucessorDoNumero = numero + 1;
   antecessorDoNumero = numero - 1;

//Saída do programa.
    printf("Sucessor de %d: %d\n", numero, sucessorDoNumero);
    printf("Antecessor de %d: %d", numero, antecessorDoNumero);

    return 0;
}
