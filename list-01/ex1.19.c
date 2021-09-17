/*
    Nome: ex1.19.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que calcula o di�metro da circunfer�ncia e a �rea de um c�culo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declara��o das vari�veis.
    float raioDoCirculo;
    float areaDoCirculo;
    float diametroDoCirculo;
    float circunferenciaDoCirculo;
    float constantePi = 3.141592;

//Recebendo o valor da vari�vel raioDoCirculo.
    printf("Valor do raio do circulo: ");
    scanf("%f", &raioDoCirculo);

//Processamento do programa.
    diametroDoCirculo = 2 * raioDoCirculo;
    circunferenciaDoCirculo = 2 * constantePi * raioDoCirculo;
    areaDoCirculo = constantePi * (raioDoCirculo * raioDoCirculo); //raio ao quadrado.

//Sa�da do programa.
    printf("Diametro = %.2f\n", diametroDoCirculo);
    printf("Circunferencia = %.2f\n", circunferenciaDoCirculo);
    printf("Area = %.2f", areaDoCirculo);

    return 0;
}
