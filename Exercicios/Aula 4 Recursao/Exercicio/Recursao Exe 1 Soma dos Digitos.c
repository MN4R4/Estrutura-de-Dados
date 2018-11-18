// Lista Exercicio ED - Recursão Exe.1 - Soma de Digitos
#include <stdio.h>

int somadigitos(int n){
	if(n % 10 == n) return n;
	else return ((n % 10) + somadigitos(n/10));
}

int main(){
	
	int a, i;
	
	scanf("%d",&a);
	printf("Valor da soma = %d\n",sd(a));
		
	return 0;
}
