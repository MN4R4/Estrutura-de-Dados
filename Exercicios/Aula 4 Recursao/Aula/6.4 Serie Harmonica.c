// Aula 6 Recurs�o - Exerc. 4 S�rie Harmonica
#include <stdio.h>

float h(int n){
	if(n==1)return 1;
	else return 1.0/n + h(n-1)
}

int main(){
	
	int n;
	
	printf("Informe o valor inicial\n");
	scanf("%d",&n);
	printf("Harmonica = %.2f\n",h(n));
	
	return 0;
}
