/*
    Nome: ex1.20.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que calcula a m�dia aritm�tica de dois n�meros inteiros.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declara��o das vari�veis.
    int primeiroNumero;
    int segundoNumero;
    int mediaAritmetica;

//Recebendo o valor da vari�vel raioDoCirculo.
    printf("Primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Segundo numero: ");
    scanf("%d", &segundoNumero);

//Processamento do programa.
    mediaAritmetica = (primeiroNumero + segundoNumero) / 2;

//Sa�da do programa.
    printf("Media aritmetica: %d", mediaAritmetica);

    return 0;
}
