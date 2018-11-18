// Exercicio 1 Aula 3 - pilhas // Criar um programa para ler uma express�o aritimetica na forma infixa e exibir sua forma
// posfixa correspondente, bem como seu valor numerico

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

// a funcao de prioridade vai retornar o grau de importancia do caractere para ordenala na pilha
int prio(char o) {
	switch( o ) {
		case '(': return 0;
		case '+':
		case '-': return 1;
		case '*':
		case '/': return 2;
	}
	return -1;
}

char *posfixa(char *e) {

	static char s[256];
	int j = 0, i;
	Pilha P = pilha(256);

	for(i = 0; e[i]; i++){
		if(e[i]=='(') {
			empilha('(',P);
		} else if(isdigit(e[i])){
			s[j++] = e[i];
		} else if(strchr("+-/*",e[i])) {
			// enquanto P n�o estiver vazia e o topo da prioridade for maior ou igual ao valor do vetor fa�a.
			while(!vaziap(P) && prio(topo(P))>=prio(e[i]) )
				s[j++] = desempilha(P);
				empilha(e[i],P);
		} else if( e[i] == ')' ) {
			while( topo(P)!='(' ){
				s[j++] = desempilha(P);
			}
			desempilha(P);
		}
		while(!vaziap(P)){
			s[j++] = desempilha(P);
		}
		s[j] = '\0';
		destroip(&P);
	}
	return s;
}

// essa funcao ir� retornar o valor da equa��o;
int valor(char *e) {
	int i;
	Pilha P = pilha(256);
	for(i = 0; e[i]; i++){
		if(isdigit(e[i])){
			empilha(e[i]-'0',P);
		} else {
			int y = desempilha(P);
			int x = desempilha(P);
			switch( e[i] ) {
				case '+': empilha(x+y,P); break;
				case '-': empilha(x-y,P); break;
				case '*': empilha(x*y,P); break;
				case '/': empilha(x/y,P); break;
			}
		}
	}
	int z = desempilha(P);
	destroip(&P);
	return z;
}

int main(void) {
	char s[256];
		printf("Informe a sentenca:\n");
		gets(s);
		printf("Posfixa: %s\n",posfixa(s));
		printf("Valor..: %d\n\n",valor(s));
	return 0;
}
