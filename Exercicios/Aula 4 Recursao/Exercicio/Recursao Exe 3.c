// Lista Exercicio ED - Recursão Exe.3
#include <stdio.h>

int suc(int n) { 
	return n + 1; 
}

int pred(int n) { 
	return n - 1 ; 
}

int par(int n){
	if (n == 0) return 1;
	if (n == 1) return 0;
	return par(pred(n));
}

int main(){
	printf("valores 15 e 16\n");
	printf(par(15) ? "valor par(15) = par\n" : "valor par(15) = impar\n");
	printf(par(16) ? "valor par(16) = par\n" : "valor par(16) = impar\n");
	return 0;
}
