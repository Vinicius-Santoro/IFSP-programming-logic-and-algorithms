/*
    Nome: ex1.24.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que calcula e exibe o sal�rio l�quido de um professor.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declara��o das vari�veis.
    int quantidadeDeAula;
    float valorDaAula;
    float descontoInss;
    float salarioLiquido;

//Entrada do programa.
    printf("Valor da hora/aula: ");
    scanf("%f", &valorDaAula);

    printf("Quantidade de aulas: ");
    scanf("%d", &quantidadeDeAula);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &descontoInss);

//Processamento do programa.
   salarioLiquido = (quantidadeDeAula * valorDaAula) - ((descontoInss/100)* //Poderia criar uma vari�vel
                     quantidadeDeAula * valorDaAula);                       //para armazenar o sal�rio
                                                                            //bruto do professor.
//Sa�da do programa.
    printf("Salario Liquido: %.2f", salarioLiquido);

    return 0;
}
