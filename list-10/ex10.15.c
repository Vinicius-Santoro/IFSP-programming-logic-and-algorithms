/*
    Nome: ex.10.15.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 15.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir );
bool intercepta( const Retangulo *r1, const Retangulo *r2 );
bool contem( const Retangulo *r, const Ponto *p );

int main() {

    Ponto pontoMain1;
    Ponto pontoMain2;
    Ponto pontoMain3;
    Ponto pontoMain4;
    Retangulo auxMain1;
    Retangulo auxMain2;

    printf( "Retangulo 1 \n" );
    printf( "Ponto superior esquerdo\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain1.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain1.y )/

    printf( "Ponto inferior direito\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain2.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain2.y );

    auxMain1 = novoRetangulo( &pontoMain1, &pontoMain2 );

    printf( "Retangulo 2 \n" );
    printf( "Ponto superior esquerdo\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain3.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain3.y )/

    printf( "Ponto inferior direito\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain4.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain4.y );

    auxMain2 = novoRetangulo( &pontoMain3, &pontoMain4 );

    if( intercepta( &auxMain1, &auxMain2 ) ) {

        printf( "\n\nOs retangulos se interceptam!\n\n" );

    } else {

        printf( "\n\nOs retangulos nao se interceptam!\n\n" );
    }


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

bool intercepta( const Retangulo *r1, const Retangulo *r2 ) {

/*Se apenas um ponto do r1 passar por r2, há interceptação.
(vice-versa)*/

/***************************************************************

Retangulo 1:
Sup esquerdo.
    x: 1
    y: 4
Inf direito.
    x: 6
    y: 1

Retangulo 2:
Sup esquerdo.
    x: 3
    y: 5
Inf direito.
    x: 5
    y: 2

             (y)
              |
              |*------------
              ||    ret    |
              ||     1     |
              ||-----------*
--------------|--------------(x)
              |
              |
              |
              |

             (y)
              |
              |  *--------|
              |  |  ret 2 |
              |  |--------*
--------------|--------------(x)
              |
              |
              |
              |
Os retângulos se interceptam.

A função contem tem como parâmetro um retângulo e os pontos.
A função intercepta recebe dois retângulos. Então
tenho que transformar o r1 e r2 em pontos.

****************************************************************/

    Ponto auxP1;
    Ponto auxP2;

    auxP1.x = r1->superiorEsquerdo.x;
    auxP1.y = r1->superiorEsquerdo.y;

    auxP2.x = r2->superiorEsquerdo.x;
    auxP2.y = r2->superiorEsquerdo.y;

/***************************************************************

 ->Essa função está "quebrada". Ela só retornando true.
 ->Estou tendo problemas nas condicionais, não sei se do jeito
   que fiz, ele compara se um retângulo está contido no outro.

****************************************************************/

    if( auxP2.x <= auxP1.x ||
        auxP2.y <= auxP1.y ||
        auxP1.x <= auxP2.x ||
        auxP1.y <= auxP2.y ||

        auxP2.x <= auxP1.y ||
        auxP2.y <= auxP1.x ||
        auxP1.x <= auxP2.y ||
        auxP1.y <= auxP2.x  ) {

        return true;

    } else {

        return false;

    } //Fim do else.

}//Fim da função intercepta.


