/*
    Nome: ex1.12.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Programa que recebe três valores decimais e formate-os com
               três saídas diferentes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das variáveis.
    float numQualquer;

//Recebendo o valor da variável numQualquer.
    printf("Entre com um valor qualquer: ");
    scanf("%f", &numQualquer);

//Saída do programa.
    printf("%f\n", numQualquer);
    printf("%.2f\n", numQualquer);
    printf("%.3f", numQualquer);

    return 0;
}
