// Aula 6 Recursão - Exerc. 2 Potencia
#include <stdio.h>

float pot(float a, int n){
	if (n == 0) return 1;
	else return a * pot(a,n-1); 
}

int main(){
	
	int n;
	float a;
	printf("Base e Expoente\n");
	scanf("%f %d",&a,&n);
	printf("potencia = %.1f\n",pot(a,n));
	return 0;
}
