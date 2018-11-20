//  Aula 6 Recursão - Exerc. 7 Binario
#include <stdio.h>

void binario(int a){
	if (a < 2) printf("%d",a);
	else {
		binario(a/2);
		printf("%d",a%2);
	}
}

int main(){
	int a;
	printf("Informe o valor: \n");
	scanf("%d",&a);
	binario(a);
	return 0;
}

