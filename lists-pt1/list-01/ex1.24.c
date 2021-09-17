/*
    Nome: ex1.24.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que calcula e exibe o salário líquido de um professor.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
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
   salarioLiquido = (quantidadeDeAula * valorDaAula) - ((descontoInss/100)* //Poderia criar uma variável
                     quantidadeDeAula * valorDaAula);                       //para armazenar o salário
                                                                            //bruto do professor.
//Saída do programa.
    printf("Salario Liquido: %.2f", salarioLiquido);

    return 0;
}
