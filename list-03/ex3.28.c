/*
    Nome: ex.3.28c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 3, exercício 28.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float saldo = 0.0;
    float depositar = 0.0;
    float sacar = 0.0;
    int opc = 0; //Variável que armazena a escolha do usuário.



    printf("Saldo inicial: ");
    scanf( "%f", &saldo );

    printf( "Operacoes:     \n"
            "   1) Deposito;\n"
            "   2) Saque;   \n"
            "   3) Fim.     \n" );

    while ( opc != 3 ) {

        printf("Operacao desejada: ");
        scanf( "%d", &opc );

        switch(opc) {

            case 1: printf( "Valor a depositar: " );
                    scanf( "%f", &depositar );
                    saldo += depositar;
                    break;

            case 2: printf( "Valor a sacar: " );
                    scanf( "%f", &sacar );
                    saldo -= sacar;
                    break;

            case 3: if ( saldo == 0 ) {
                        printf( "Saldo final: R$%.2f\n", saldo );
                        printf( "Sem saldo." );
                        break;
                    }

                    if ( saldo < 0 ){
                        saldo *= -1;
                        printf( "Saldo final: -R$%.2f\n", saldo );
                        printf( "Conta devedora." );
                        break;
                    }

                    if ( saldo > 0 ) {
                        printf( "Saldo final: R$%.2f\n", saldo );
                        printf( "Conta preferencial." );
                        break;
                    }

            default:  printf( "Opcao invalida." );
                      break;

        }
    }//Fim do While.

}//Fim do main.
