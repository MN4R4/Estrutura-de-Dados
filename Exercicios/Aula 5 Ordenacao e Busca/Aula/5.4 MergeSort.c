// Aula 5 - Ordenacao e Busca - Exec. 4 Merge Sort implementacao
#include <stdio.h>

void intercala(int v[], int p, int m, int u){
	
	int w[u-p+1];
	int i = p, j = m + 1, k = 0;
	
	while( i <= m && j <= u){
		if(v[i] < v[j]) w[k++] = v[i++];	
		else w[k++] = v[j++];	
		while( i <= m ) {
			w[k++] = v[i++];	
		}
		while( j <= u ){
			w[k++] = v[j++];
		} 
		for( k = 0 ; k <= u-p ; k++ ) {
			v[p+k] = w[k];
		} 
	}
	return;
}

void ms(int v[], int p, int u){
	if (p == u) return ;
	int m = (p+u)/2;
	ms(v,p,m);
	ms(v,m+1,u);
	intercala(v,p,m,u);
	return;
}

void msort(int v[], int n){
	ms(v,0,n-1);
	return ;
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
	
	int v[10] = {83,31,91,46,27,20,96,25,96,80};
	printf("Antes:\n");
	print(v,10);
	msort(v,10);
	printf("\nDepois:\n");
	print(v,10);
	return 0;
}
