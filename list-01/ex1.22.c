/*
    Nome: ex1.22.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que desconta 9% do preço de venda de um produto.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//Declaração das variáveis.
    float valorProduto;
    float descontoProduto;

//Recebendo o valor da variável valorProduto.
    printf("Valor do produto: ");
    scanf("%f", &valorProduto);

//Processamento do programa.
   descontoProduto = valorProduto - (0.09 * valorProduto); //9 % valorProduto.

//Saída do programa.
    printf("Preco de venda com 9%% de desconto: %.2f", descontoProduto);

    return 0;
}
