//  Aula 6 Recursão - Exerc. 8 Torre de Hanoi
#include <stdio.h>

int hanoi(int n){
	if ( n == 1 ) return 1;
	return 1 + 2 * hanoi(n - 1); 
}

int main(){
	
	int teste = 0, n ;
	
	while(scanf("%d",&n) == 1 && n > 0){
		printf("Teste %d\n%d\n\n",++teste,hanoi(n));
	}
	
	return 0;
}
