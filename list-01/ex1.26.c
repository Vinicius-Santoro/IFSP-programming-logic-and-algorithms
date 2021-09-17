/*
    Nome: ex1.26.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que converte Celsius para Fahrenheit.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
    float celsius;
    float fahrenheit;
    float celsiusTofahrenheit;

//Recebendo o valor da variável celsius.
    printf("Temperatura em graus Celsius: ");
    scanf("%f", &celsius);

//Processamento do programa.
    celsiusTofahrenheit = 1.8 * celsius + 32;

//Saída do programa.
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit",
           celsius, celsiusTofahrenheit);

    return 0;
}
