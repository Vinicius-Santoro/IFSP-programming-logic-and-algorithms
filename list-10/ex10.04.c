/*
    Nome: ex.10.4.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 4.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

typedef struct {
    float real;
    float imaginario;
} Complexo;

Complexo somar( const Complexo *c1, const Complexo *c2 );
void imprimirComplexo( const Complexo *c );

int main () {

    Complexo c1;
    Complexo c2;
    Complexo c1_Plus_c2;

    printf( "Complexo 1\n" );
    printf( "   Parte real: " );
    scanf( "%f", &c1.real );
    printf( "   Parte imaginaria: " );
    scanf( "%f", &c1.imaginario );

    printf( "Complexo 2\n" );
    printf( "   Parte real: " );
    scanf( "%f", &c2.real );
    printf( "   Parte imaginaria: " );
    scanf( "%f", &c2.imaginario );

    printf( "(%.2f + %.2fi) + (%.2f + %.2fi) = ",
            c1.real, c1.imaginario, c2.real, c2.imaginario );

    c1_Plus_c2 = somar(&c1, &c2);

    imprimirComplexo(&c1_Plus_c2);

    return 0;

}//Fim da função main.

Complexo somar( const Complexo *c1, const Complexo *c2 ) {

    Complexo aux;
    aux.real = c1->real + c2->real;
    aux.imaginario = c1->imaginario + c2->imaginario;

    return aux;

}//Fim da função somar imaginario.

void imprimirComplexo( const Complexo *c ) {

    printf( "(%.2f + %.2fi)", c->real, c->imaginario );

}//Fim da função imprimirComplexo.

