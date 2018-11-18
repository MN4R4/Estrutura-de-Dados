// Lista Exercicio ED - Recursão Exe.2 - Soma de Digitos
#include <stdio.h>

int somadigitos(int n){
	if(n % 10 == n) return n;
	else return ((n % 10) + somadigitos(n/10));
}

int superdigitos(int a){
	if (a < 0) return a;
	else 
}

int main(){
	
	int a, b;
	printf("Digite o valor: \n");
	scanf("%d",&a);
	return 0;
}
