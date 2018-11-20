//  Aula 6 Recursão - Exerc. 6 Contagem Regressiva
#include <stdio.h>

void cr(int a){
	if (a < 0) return;
	printf("%d\n",a);
	cr(a-1);
}

int main(){
	int a;
	printf("Informe o valor: \n");
	scanf("%d",&a);
	cr(a);
	return 0;
}

