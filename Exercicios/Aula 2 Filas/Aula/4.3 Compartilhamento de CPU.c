// Aula 4 Filas Exercicio 3 Compartilhamento de CPU
// A saída do programa eh a sequencia dos processos 2, 4, 1, 3
#include<stdio.h>
#include "fila.h"
#define tempo 3

int main(void){
	
	Fila F = fila(5);
	enfileira(17,F);
	enfileira(25,F);
	enfileira(39,F);
	enfileira(46,F);
	while(!vaziaf(F)){
		int x = desenfileira(F);
		int p = x/10;
		int t = x%10;
		if (t > 3) enfileira(p*10 + (t-tempo),F);
		else printf("Processo %d concluido\n",p);
	}
	destroif(&F);
	return 0;
}
