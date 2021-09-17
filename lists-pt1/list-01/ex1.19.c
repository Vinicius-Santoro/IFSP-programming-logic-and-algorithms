/*
    Nome: ex1.19.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que calcula o diâmetro da circunferência e a área de um cículo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
    float raioDoCirculo;
    float areaDoCirculo;
    float diametroDoCirculo;
    float circunferenciaDoCirculo;
    float constantePi = 3.141592;

//Recebendo o valor da variável raioDoCirculo.
    printf("Valor do raio do circulo: ");
    scanf("%f", &raioDoCirculo);

//Processamento do programa.
    diametroDoCirculo = 2 * raioDoCirculo;
    circunferenciaDoCirculo = 2 * constantePi * raioDoCirculo;
    areaDoCirculo = constantePi * (raioDoCirculo * raioDoCirculo); //raio ao quadrado.

//Saída do programa.
    printf("Diametro = %.2f\n", diametroDoCirculo);
    printf("Circunferencia = %.2f\n", circunferenciaDoCirculo);
    printf("Area = %.2f", areaDoCirculo);

    return 0;
}
