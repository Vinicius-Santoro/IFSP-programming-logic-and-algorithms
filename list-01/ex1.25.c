/*
    Nome: ex1.25.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que converte Fahrenheit para Celsius.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declara��o das vari�veis.
    float grausFahrenheit;
    float grausCelsius;
    float fahrenheitParaCelsius;

//Recebendo o valor da vari�vel grausFahrenheit.
    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &grausFahrenheit);

//Processamento do programa.
    fahrenheitParaCelsius = (grausFahrenheit - 32)/1.8;

//Sa�da do programa.
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius",
           grausFahrenheit, fahrenheitParaCelsius);

    return 0;
}
