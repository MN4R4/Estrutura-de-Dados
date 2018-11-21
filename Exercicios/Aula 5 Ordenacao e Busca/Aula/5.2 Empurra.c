// Aula 5 - Ordenacao e Busca - Exec. 2 Empurra
#include <stdio.h>

void empurra(int v[], int m, int n){
	int aux;
	
	aux = v[n-1];
	v[n-1]= v[m-1];
	v[m-1] = aux;
	
	return 0;
}

void print(int v[], int n){
	int i;
	for(i = 0 ; i < n ; i++){
		printf("%d",v[i]);
	}
	return ;
}

int main(){
	
	int v[5] = {48,19,31,52,27};
	
	printf("Antes\n");
	print(v,5);
	empurra(v,1,4);
	printf("\nDepois\n");
	print(v,5);	

	return 0;
}
