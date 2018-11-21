// Aula 5 - Ordenacao e Busca - Exec. 3 Recursiva Bsort
#include <stdio.h>

void Bsort(int v[],int n){
	int i, aux;
	if (n == 1) {
		return ;	
	} else {
		for(i = 0; i < n - 1 ; i++){
			if(v[i] < v[i + 1]){
				aux = v[i + 1];
				v[i + 1] = v[i];
				v[i] = aux;
			}
		}
		Bsort(v,n-1);
	}
}

void print(int v[], int n){
	int i;
	for(i = 0 ; i < n ; i++){
		if(i == n - 1) printf("%d\n",v[i]);
		else printf("%d-",v[i]);
	}
	return ;
}

int main(){
	
	int v[5] = {48,19,31,52,27};
	printf("Antes\n");
	print(v,5);
	Bsort(v,5);
	printf("\nDepois\n");
	print(v,5);
		
	return 0;
}
