/*
    Nome: ex1.25.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que converte Fahrenheit para Celsius.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
    float grausFahrenheit;
    float grausCelsius;
    float fahrenheitParaCelsius;

//Recebendo o valor da variável grausFahrenheit.
    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &grausFahrenheit);

//Processamento do programa.
    fahrenheitParaCelsius = (grausFahrenheit - 32)/1.8;

//Saída do programa.
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius",
           grausFahrenheit, fahrenheitParaCelsius);

    return 0;
}
