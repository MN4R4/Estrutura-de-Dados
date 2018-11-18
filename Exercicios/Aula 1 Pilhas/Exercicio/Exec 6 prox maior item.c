//Lista de Exercicios - Pilhas,  exec. 6.0 próximo maior inteiro

#include <stdio.h>
#include "pilhas.h"

void pmi(int *pilha,int tam){
	Pilha P = pilha(tam);
	
}


int main(){
	
	int a, *p, i;
	
	printf("Informe o valor do tamanho do vetor\n");
	scanf("%d",&a);
	p = malloc(a*sizeof(int));
	printf("Valores\n");
	for(i = 0; i < a ; i++){
		scanf("%d",&p[i]);
	}
	pmi(p,a);
	
	return 0;
}
