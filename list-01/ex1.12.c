/*
    Nome: ex1.12.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Programa que recebe tr�s valores decimais e formate-os com
               tr�s sa�das diferentes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Declara��o das vari�veis.
    float numQualquer;

//Recebendo o valor da vari�vel numQualquer.
    printf("Entre com um valor qualquer: ");
    scanf("%f", &numQualquer);

//Sa�da do programa.
    printf("%f\n", numQualquer);
    printf("%.2f\n", numQualquer);
    printf("%.3f", numQualquer);

    return 0;
}
