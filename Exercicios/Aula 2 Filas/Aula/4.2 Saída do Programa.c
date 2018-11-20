// Aula 4 - Filas Exercicio 4.2 Saída do programa
// A saida vai mostrar a letra B, C, D e E;
#include<stdio.h>
#include "fila.h"

int main(void){
	
	int i;
	Fila F = fila(5);
	for(i = 0; i <= 3 ; i++){
		enfileira('A' + i, F);
	}
	while(!vaziaf(F)){
		prinf("%c\n",desinfileira(F));
	}
	destroif(&F);
	return 0;
}
