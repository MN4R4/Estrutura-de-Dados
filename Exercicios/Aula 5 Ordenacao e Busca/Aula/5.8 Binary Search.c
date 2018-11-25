// Aula 5 - Ordenacao e Busca - Exec. 7.2 Binary Search
#include <stdio.h>

// nota-se que a ordem da sequencia é crescente para que a busca binária possa ser executada com sucesso
int bsearch(int x, int v[], int n){
	int p = 0;
	int u = n - 1;
	while( p <= u){
		int m =(p+u)/2;
		if(x==v[m]) return 1;
		if(x < v[m]) u = m - 1;
		else p = m + 1; 
	}
	return 0;
}

int main(){
	
	int v[8] = {19,27,31,48,52,66,75,80};
	printf("27: %d\n",bsearch(27,v,8));
	printf("51: %d\n",bsearch(51,v,8));
	
	return 0;
}
