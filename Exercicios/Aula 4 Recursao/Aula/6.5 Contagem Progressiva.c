// Aula 6 Recursão - Exerc. 5 Contagem Progressiva
#include <stdio.h>

void cp(int a){

	if (a < 0) return 0;
	cp(a-1);
	printf("%d\n",a);
	
}

int main(){
	int a;
	
	printf("Informe o ultimo valor\n");
	scanf("%d",&a);
	cp(a);
	return 0;
}
