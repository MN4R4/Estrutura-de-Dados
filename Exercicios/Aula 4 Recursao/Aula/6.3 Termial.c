// Aula 6 Recursão - Exerc. 3 Termial
#include <stdio.h>

int termial(int n){
	if ( n = 0 ) return 0;
	else return termial(n-1) + n;
}

int main(){
	
	int n;
	printf("numero");
	scanf("%d",&n);
	printf("Termial = %d\n",termial(n));
	return 0;
}
