// Exercicio 3.0 - ED, Balanceamento de parênteses usando Pilhas

#include <stdio.h>
#include <string.h>
#include "pilha.h"

int balance(char *a){
	
	int i, r;
	
	Pilha A = pilha(strlen(a));
	
	for(i = 0; i < strlen(a) ; i++) {
		switch (a[i]){
			case '(': 
				empilha(')',A);
				break;
			case '[':
				empilha(']',A);
				break;
			case '{':
				empilha('}',A);
				break;
			default:
				if(vaziap(A) || a[i] != desempilha(A)){
					destroip(&A);
					return 0;
				} else {
					r = vaziap(A);
					destroip(&A);
					return r; 
				}
		}
	}
}

int main(void){
	
	char a[256];
	
	printf("informe a frase:\n");
	
	gets(a);
	
	printf( balance(a) ? "balanceado\n" : "nao balanceado\n");
	
	return 0;
}
