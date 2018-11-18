// Exercicio aula 3 exe 2 Expressão booleana

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h" // pilha de char

int prio(char o) {
	switch( o ) {
		case '(': return 0;
		case '|': return 1;
		case '&': return 2;
		case '~': return 3;
	}
	return -1;
}
char *posfixa(char *e) {
	static char s[256];
	Pilha P = pilha(256);
	int j = 0, i;
	for(i = 0; e[i]; i++){
		if( isalpha(e[i]) ) s[j++] = e[i];
		else if( strchr("~&|",e[i]) ) empilha(e[i],P);
		else if( e[i]==')' ) s[j++] = desempilha(P);
		s[j] = '\0';
	}	
	destroip(&P);
	return s;
}

char valor(char *e) {
	Pilha P = pilha(256);
	int i;
	for(i = 0 ; e[i] ; i++)
		if(isalpha(e[i]))empilha( e[i]=='V',P);
		else if( strchr("~&|",e[i]) ) {
			int y = desempilha(P);
			switch( e[i] ) {
				case '~': empilha(!y,P); break;
				case '|': empilha(desempilha(P) || y,P); break;
				case '&': empilha(desempilha(P) && y,P); break;
			}
		}
	int x = desempilha(P);
	destroip(&P);
	return x ? 'V' : 'F';
}
	
int main(void) {
	char *s = posfixa("((!F)|(F&V))"); 
	printf("Posfixa: %s\n",s);
	printf("Valor..: %c\n\n",valor(s));	
	return 0;
}
