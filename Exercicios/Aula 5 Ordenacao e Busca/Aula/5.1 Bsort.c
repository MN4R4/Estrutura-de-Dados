// Aula 5 - Ordenacao e Busca - Exec. 1 b.sort
#include <stdio.h>

void bsort(int v[], int n){
	int i, j, aux;
	for(i = 0; i < n ; i++){
		for(j = 0 ; j < n - 1 ;j++){
			if (v[j] > v[j+1]){
				aux = v[j+1];
				v[j+1] = v[j];
				v[j] = aux;
			}
		}
	}
}

void print(int v[], int n){
	int i;
	for(i = 0 ; i < n ; i++){
		printf("%d",v[i]);
	}
	return ;
}

int main(){
	
	int v[7] = {6,2,5,7,1,9,33};
	printf("Antes:\n");
	print(v,7);
	bsort(v,7);
	printf("\nDepois:\n");
	print(v,7);
	
	return 0;
}
