// Exercicio de Aula Pilhas - Exercicio 4. Pilha de String
#include <stdio.h>
#include "pilha.h"

int main(){
	
	Pilha P = pilha(5);
	int i;
	char s[11];
	for(i = 1; i <= 3 ; i++){
		printf("? ");
		gets(s);
		empilha(s,P);
	}
	while(!vaziap(P)) puts(desempilha(P));
	return 0;
}
// resposta tres tres tres
