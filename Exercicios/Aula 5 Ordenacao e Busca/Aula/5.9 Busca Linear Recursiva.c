// Aula 5 - Ordenacao e Busca - Exec. 9 Linear Search Recursive
#include <stdio.h>

int rlsearch(int c, int v[], int n){
	if ( c == v[n] ) return 1;
	else if (n >= 0) return rlsearch(c,v,n-1);  
	else return 0;
}

int main(){
	
	int v[8] = {66,80,31,48,27,75,19,52};
	printf("27: %d\n",rlsearch(27,v,8));
	printf("51: %d\n",rlsearch(51,v,8));
	printf("99: %d\n",rlsearch(99,v,8));
	printf("31: %d\n",rlsearch(31,v,8));
		
	return 0;
}
