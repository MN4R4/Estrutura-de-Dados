//Lista de Exercicios - Pilhas,  exec. 4.0 - maior usando pilha
#include <stdio.h>
#include "pilha.h"

void maior(int *p, int tam){
	
	int i, m;
	Pilha P = pilha(tam);
	for(i = 0; i < tam ; i++){
		empilha(p[i],P);
	}
	m = topo(P);
	while(!vaziap(P)){
		if (m < topo(P)) 
			m = desempilha(P);
		
	}
	printf("maior = %d\n",m);
}

int main(){
	int a, *p, i;
	
	printf("Informe a quantidade de numeros: \n");
	scanf("%d",&a);
	p = malloc(a*sizeof(int));
	printf("Valores:\n");
	for(i = 0; i < a ; i++){
		scanf("%d",&p[i]);
	}
	
	maior(p,a);
	
	return 0;
}
