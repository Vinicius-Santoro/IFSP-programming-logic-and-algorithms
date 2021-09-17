/*
    Nome: ex.10.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 10, exerc�cio 5.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

typedef struct {
    float numerador;
    float denominador;
} Fracao;

Fracao somar( const Fracao *f1, const Fracao *f2 );
Fracao subtrair( const Fracao *f1, const Fracao *f2 );
Fracao multiplicar( const Fracao *f1, const Fracao *f2 );
Fracao dividir( const Fracao *f1, const Fracao *f2 );
void imprimirFracao( const Fracao *f );

int main () {

    Fracao n1;
    Fracao n2;

    Fracao n1_Aux_n2;   //  Vari�vel auxiliar para somar,
                        //subtrair, multiplicar e dividir n1 e n2

    printf( "Fracao 1\n" );
    printf( "   Numerador: " );
    scanf( "%f", &n1.numerador );
    printf( "   Denominador: " );
    scanf( "%f", &n1.denominador );

    printf( "Fracao 2\n" );
    printf( "   Numerador: " );
    scanf( "%f", &n2.numerador );
    printf( "   Denominador: " );
    scanf( "%f", &n2.denominador );

    /*------------------SOMA------------------*/

    printf( "%.2f/%.2f + %.2f/%.2f = ",
            n1.numerador, n1.denominador, n2.numerador, n2.denominador );

    n1_Aux_n2 = somar(&n1, &n2);

    imprimirFracao(&n1_Aux_n2);

    /*---------------SUBTRA��O---------------*/

    printf( "%.2f/%.2f - %.2f/%.2f = ",
            n1.numerador, n1.denominador, n2.numerador, n2.denominador );

    n1_Aux_n2 = subtrair(&n1, &n2);

    imprimirFracao(&n1_Aux_n2);

    /*-------------MULTIPLICA��O------------*/

    printf( "%.2f/%.2f * %.2f/%.2f = ",
            n1.numerador, n1.denominador, n2.numerador, n2.denominador );

    n1_Aux_n2 = multiplicar(&n1, &n2);

    imprimirFracao(&n1_Aux_n2);

    /*----------------DIVIS�O---------------*/

    printf( "%.2f/%.2f / %.2f/%.2f = ",
            n1.numerador, n1.denominador, n2.numerador, n2.denominador );

    n1_Aux_n2 = dividir(&n1, &n2);

    imprimirFracao(&n1_Aux_n2);

    return 0;

}//Fim da fun��o main.

Fracao somar( const Fracao *f1, const Fracao *f2 ) {

    Fracao soma1;
    Fracao soma2;

    if ( f1->denominador == f2->denominador ) {

        soma1.numerador = f1->numerador + f2->numerador;

        return soma1;

    } else {

        soma2.denominador = f1->denominador * f2->denominador;

        soma2.numerador = ( soma2.denominador / f1->denominador ) * f1->numerador +
                          ( soma2.denominador / f2->denominador ) * f2->numerador;

        return soma2;
    }

}//Fim da fun��o somar.

Fracao subtrair( const Fracao *f1, const Fracao *f2 ) {

    Fracao subtracao1;
    Fracao subtracao2;

    if ( f1->denominador == f2->denominador ) {

        subtracao1.numerador = f1->numerador * f2->numerador;
        subtracao1.denominador = f1->denominador * f2->numerador;

        return subtracao1;

    } else {

        subtracao2.denominador = f1->denominador * f2->denominador;

        subtracao2.numerador = ( subtracao2.denominador / f1->denominador ) * f1->numerador -
                               ( subtracao2.denominador / f2->denominador ) * f2->numerador;

        return subtracao2;
    }

}//Fim da fun��o subtrair.

Fracao multiplicar( const Fracao *f1, const Fracao *f2 ) {

    Fracao multiplicacao1;

    multiplicacao1.numerador = f1->numerador * f2->numerador;
    multiplicacao1.denominador = f1->denominador * f2->denominador;

    return multiplicacao1;

}//Fim da fun��o multiplicar.

Fracao dividir( const Fracao *f1, const Fracao *f2 ) {

    Fracao divisao1;

    divisao1.numerador = f1->numerador * f2->denominador;
    divisao1.denominador = f1->denominador * f2->numerador;

    return divisao1;

}//Fim da fun��o dividir.

void imprimirFracao( const Fracao *f ) {

    printf( "%.2f/%.2f\n", f->numerador, f->denominador );

}//Fim da fun��o imprimirComplexo.

