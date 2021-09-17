/*
    Nome: ex1.23.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que calcula e exibe a idade atual aproximada do usuário.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
    int anoDeNacimento;
    int anoAtual;
    int idadeAproximada;

//Recebendo o valor das variáveis anoDeNascimento e anoAtual.
    printf("Ano de nascimento: ");
    scanf("%d", &anoDeNacimento);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

//Processamento do programa.
    idadeAproximada = anoAtual - anoDeNacimento;

//Saída do programa.
    printf("Idade aproximada: %d anos", idadeAproximada);

    return 0;
}
