/*
    Nome: ex.10.14.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 14.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>
    #define TAM 5

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir );
bool contem( const Retangulo *r, const Ponto *p );

int main() {

    Ponto pontoMain1;
    Ponto pontoMain2;
    Retangulo auxMain;
    Ponto outrosPontos[TAM];

    printf( "Retangulo\n" );
    printf( "Ponto superior esquerdo\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain1.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain1.y );

    printf( "Ponto inferior direito\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain2.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain2.y );

    printf( "Pontos\n" );

     for ( int i = 0; i < TAM; i++  ) {

        printf( "   Ponto %d\n", i+1 );
        printf( "   x:" );
        scanf( "%d", &outrosPontos[i].x );
        printf( "   y:" );
        scanf( "%d", &outrosPontos[i].y );
     }

    auxMain = novoRetangulo( &pontoMain1, &pontoMain2 );

    for ( int i = 0; i < TAM; i++ ) {

        if( contem( &auxMain, &outrosPontos[i] ) ) {

           printf( "(%+01d, %+01d): contido!\n", outrosPontos[i].x, outrosPontos[i].y );

        } else {

              printf( "(%+01d, %+01d): nao contido!\n", outrosPontos[i].x, outrosPontos[i].y );
        }

    }//Fim do For.

}//Fim da função main.

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ) {

    Retangulo aux;//variável auxiliar.

/***************************************************************

Como quero atribuir nas variáveis aux o valor da sEsq/iDir,
precisei colocar +1 ponteiro.
*x = referência na memória da variável x;
**x = valor da variável x;

****************************************************************/
    aux.superiorEsquerdo = *sEsq;
    aux.inferiorDireito = *iDir;

    return aux;

}//Fim da função novoRetangulo.

bool contem( const Retangulo *r, const Ponto *p ) {

/*Descobrindo se o valor digitado pelo usuário está
dentro do meu retângulo.*/

//Se o X e o Y do ponto, forem menores que o X e o Y
//do retângulo, então true. Se não, false.

    Ponto aux;
    Ponto aux2;

    aux.x = r->superiorEsquerdo.x;
    aux.y = r->superiorEsquerdo.y;

    aux2.x = r->inferiorDireito.x;
    aux2.y = r->inferiorDireito.y;


    if( p->x <= aux.x && p->x <= aux2.x ||
        p->y <= aux.y && p->y <= aux2.y ){

        return false;

    } else {

        return true;

    } //Fim do else.

}//Fim da função contem.


