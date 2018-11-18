// Lista de exercicio de ED - Recursão 3.0 usando as seguintes funções suc(n) { return n+1 } pred(n) { return n - 1}
  
#include <stdio.h>

int suc(int n){
	return n + 1;
}

int pred(int n){
	return n - 1;
}

int main(){
	
	int a, b, c;
	
	printf("Informe 2 valores: \n");
	scanf("%d %d",&a,&b);
	printf( suc(a) > suc(b) ? "maximo %d\n":"maior %d\n",suc(a),suc(b));
	printf( suc(a) < suc(b) ? "menor %d\n" :"menor %d\n",suc(a),suc(b));
	
	/* g - verificar se o número é par
	h - verificar se o número é impar
	printf("3.(g)(h) Informe o valor:\n");
	scanf("%d",&c);
	printf(suc(c) % 2 == 0 ? "Impar\n ":"Par\n");
	printf(suc(c) % 2 != 0 ? "Par\n":"Impar\n");
	*/
		
	return 0;
} 
