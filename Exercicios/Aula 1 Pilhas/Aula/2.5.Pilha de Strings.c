// Exercicio de Aula Pilhas - Exercicio 5. Pilha de String
#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(){
	
	Pilha P = pilha(5);
	int i;
	char s[11];
	for(i = 1; i <= 3 ; i++){
		printf("? ");
		gets(s);
		empilha(strdup(s),P);
	}
	while(!vaziap(P)) puts(desempilha(P));
	return 0;
}
