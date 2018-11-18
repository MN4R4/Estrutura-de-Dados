//Lista de Exercicios - Pilhas,  exec. 3.0

#include <stdio.h>
#include <string.h>
#include "pilha.h"

void inverter(char *a){
	
	Pilha P = pilha(strlen(a));
	int i;
	
	for(i = 0; i < strlen(a) ; i++){
		empilha(a[i],P);
	}
	while(!vaziap(P)){
		printf("%c",desempilha(P));
	}
	destroip(&P);
	printf("\n");
} 

int main(){
	
	char frase[256];
	printf("Informe a frase: \n");
	gets(frase);
	inverter(frase);
	
	return 0;
}
