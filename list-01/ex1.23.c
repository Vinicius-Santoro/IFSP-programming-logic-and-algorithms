/*
    Nome: ex1.23.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que calcula e exibe a idade atual aproximada do usu�rio.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declara��o das vari�veis.
    int anoDeNacimento;
    int anoAtual;
    int idadeAproximada;

//Recebendo o valor das vari�veis anoDeNascimento e anoAtual.
    printf("Ano de nascimento: ");
    scanf("%d", &anoDeNacimento);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

//Processamento do programa.
    idadeAproximada = anoAtual - anoDeNacimento;

//Sa�da do programa.
    printf("Idade aproximada: %d anos", idadeAproximada);

    return 0;
}
