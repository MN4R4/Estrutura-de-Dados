// Aula 4 Filas Exercicio 1 - Cadeias palindromas
#include <stdio.h>
#include <ctype.h>
#include "pilha.h"
#include "fila.h"

int main(void){
	int i;
	char s[256];
	char v;
	Fila F = fila(256);
	Pilha P = pilha(256);
	
	printf("\nFrase? ");
	gets(s);
	for(i = 0; s[i]; i++){
		if(isalpha(s[i])){
			v = toupper(s[i]);
			enfileira(v,F);
			empilha(v,P);
		}
	}
	while( !vaziaf(F) && desenfileira(F) == desempilha(P));
	if(vaziaf(F)) puts("A frase eh palindrome\n");
	else puts("Nao eh palindrome");
	destroif(&F);
	destroip(&P);
	
	return 0;
}
