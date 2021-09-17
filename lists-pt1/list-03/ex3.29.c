/*
    Nome: ex.3.29c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 29.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1;
    int n2;
    int divisao;
    char opcao;

    do {
        printf("N1: ");
        scanf("%d", &n1);
        
        printf("N2: ");
        scanf("%d", &n2);
        
        if (n2 == 0) {
            while (n2 == 0) {
                printf("Nao existe divisao inteira por zero!\n");
                printf("Entre novamente com N2: ");
                scanf("%d", &n2);
            }
        }
		 
        divisao = n1 / n2;
        
        printf("%d / %d = %d\n", n1, n2, divisao);
        printf("Voce deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &opcao);
        
    } while (opcao == 'S');
    
    return 0;
}
