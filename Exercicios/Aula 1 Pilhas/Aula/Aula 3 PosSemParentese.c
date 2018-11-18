// 4.1 Pos-fixa 2º versão com prioridade

#include <stdio.h>
#include <string.h>
#include "pilha.h"

int prio(char b){
	if(b == '('){
		return 0;
	} if( b == '+'|| b == '-') {
		return 1;
	} else if (b == '*'|| b == '/'){
		return 2;	
	} else {
		return -1;	
	} 
}


void posfixa(char *a){
	
	int i, j;
	static char b[256];
	
	Pilha P = pilha(strlen(a));
	
	for(i = 0, j = 0; i < strlen(a) ; i++){
		if(a[i] == '('){
			empilha('(',P);
		}else if(a[i] >= '0' && a[i] <= '9'){
			b[j++] = a[i];
		} else if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/'){
			while(!vaziap(P) && prio(topo(P)) >= prio(a[i])){
				b[j++] = desempilha(P); 
			}
			empilha(a[i],P);
		} else if (a[i] == ')'){
			while(topo(P) != '('){
				b[j++] = desempilha(P);
			}
			desempilha(P);
		}
	}
	while(!vaziap(P)){
		b[j++] = desempilha(P);
	}
	
	b[j] = '\0';
	for(i = 0 ; i < j; i++){
		printf("%c",b[i]);
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
