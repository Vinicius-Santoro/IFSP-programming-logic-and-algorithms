/*
    Nome: ex1.22.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que desconta 9% do pre�o de venda de um produto.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declara��o das vari�veis.
    float valorProduto;
    float descontoProduto;

//Recebendo o valor da vari�vel valorProduto.
    printf("Valor do produto: ");
    scanf("%f", &valorProduto);

//Processamento do programa.
   descontoProduto = valorProduto - (0.09 * valorProduto); //9 % valorProduto.

//Sa�da do programa.
    printf("Preco de venda com 9%% de desconto: %.2f", descontoProduto);

    return 0;
}
