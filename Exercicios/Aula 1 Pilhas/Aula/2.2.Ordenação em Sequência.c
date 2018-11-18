 Exercicio 2.0 - ED, Ordenação em Sequência usando Pilhas//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void ordenar(int p[], int a){
	
	int i = 1;
	Pilha P = pilha(a + 1);
	Pilha A = pilha(a + 1);

	for( i = 0 ; i < a ; i++){
		while(!vaziap(P) && p[i] > topo(P)){
			empilha(desempilha(P),A);
		}
		empilha(p[i],P);
		while(!vaziap(A)){
			empilha(desempilha(A),P);
		}
	}
	while(!vaziap(P)){
		printf("%d ",desempilha(P));
	}
	printf("\n");
	destroip(&P);
	destroip(&A);
}

int main(void){
	
	int a, i;
	int *p;
	
	printf("Digite a quantidade de numeros que serao ordenados:\n");
	scanf("%d",&a);
	p = malloc( a * sizeof(int));
	for(i = 0 ; i < a ; i++){
		scanf("%d",&p[i]);
	}
	ordenar(p,a);
	
	return 0;
}
