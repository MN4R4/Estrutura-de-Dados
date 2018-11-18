// Lista Exercicio ED - Recursão Exe.6 Torre de Hanoi em C;

#include <stdio.h>

int hanoi(int n){
	if ( n == 1 ) return 1;
	return 1 + 2 * hanoi(n - 1); 
}

int main(){
	
	int teste = 0, n ;
	
	printf("Informe o valor: \n");
	scanf("%d",&n)
	printf("Numero de trocas %d\n",hanoi(n));
	
	return 0;
}
