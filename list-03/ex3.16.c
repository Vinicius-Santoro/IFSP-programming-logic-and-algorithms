/*
    Nome: ex.3.16c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 3, exerc�cio 16.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){	

	int i = 0;
	int n1 = 1;
	int n2 = 0;
		
	for(i = 0; i < 20; i++){
		n2 = n1 + n2;
		n1 = n2 - n1;
		printf("%d ", n2);
	}
	
	return 0;
	
}//Fim do main.
