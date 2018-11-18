// Exercicio 1.0 - ED, inversão da palavra utilizando a pilha 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void inversao(char a[]){
	
	int i, j, valor, cont;
	
	Pilha P = pilha(128);
	Pilha A = pilha(128);
	
	for(i = 0; i <= strlen(a) ; i++){
		cont++;
		if(a[i] == ' ' || i == strlen(a)){
			valor = i - cont;
			if (valor == 0){
				for(j = i - 1; j >= valor; j--){
					empilha(a[j],P);
				}
			} else {
				for(j = i; j > valor; j--){
					empilha(a[j],P);
				}
			}
			cont = 0;
		}
	}
	while(!vaziap(P)){
		empilha(desempilha(P),A);
	}
	while(!vaziap(A)){
		printf("%c",desempilha(A));
	}
	printf("\n");
	destroip(&P);
	destroip(&A);
}

int main(void){
	
	char a[128];
	
	gets(a);
	inversao(a);
	
	return 0;
}
