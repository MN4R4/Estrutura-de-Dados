// Aula 5 - Ordenacao e Busca - Exec. 7.2 Binary Search Recursive
#include <stdio.h>

// nota-se que a ordem da sequencia é crescente para que a busca binária possa ser executada com sucesso

int rbsearch(int x, int v[], int n){
	
	int p = 0;
	int u = n - 1;
	int m = (p + u) / 2;	
		
	if( x == v[p] || x == v[u] ){
		return 1;	
	} else if (p <= m) {
		rbsearch(x,v,p++);		
	} else {
		rbsearch(x,v,u--);	
	} 
	return 0;	
}	

int main(){
	
	int v[8] = {19,27,31,48,52,66,75,80};
	printf("27: %d\n",rbsearch(27,v,8));
	printf("51: %d\n",rbsearch(51,v,8));
	printf("99: %d\n",rbsearch(99,v,8));
	printf("31: %d\n",rbsearch(31,v,8));	
	return 0;
}
