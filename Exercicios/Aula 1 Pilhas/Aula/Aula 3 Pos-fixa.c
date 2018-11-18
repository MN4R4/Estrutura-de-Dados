// 4.0 Pós-fixa exercicio utilização de pilha parentesiada

#include <stdio.h>
#include <string.h>
#include "pilha.h"

void posfixa(char *a){
	
	int i;
	
	Pilha P = pilha(strlen(a));
	
	for(i = 0; i < strlen(a) ; i++){
		if(a[i] >= '0' && a[i] <= '9'){
			printf("%c",a[i]);
		} else if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/'){
			empilha(a[i],P);
		} else if (a[i] == ')'){
			printf("%c",desempilha(P));
		}
	}
	destroip(&P);
}

int main(){
	
	char a[256];
	
	printf("informe a sentenca\n");
	gets(a);
	posfixa(a);
	
	return 0;
}
