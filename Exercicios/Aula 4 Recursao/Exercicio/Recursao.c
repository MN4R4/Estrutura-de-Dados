// Explicação para a recursão utilizando outro laço como exemplo
#include <stdio.h>
/*
int rec(int a){
	if (a == 0) return 1;
	else return a * rec(a-1); // a = numero inicial -> função sendo chamada é o contador no laço for
rec(5)
5 * rec(4)
		rec(4)
		4 * rec(3)
				rec(3)
				3 * rec(2)
						rec(2)
						2 * rec(1)
								rec(1)
								1 * rec(0)
										rec(0)
											1
											rec(5)
5 * 24
	4 * 6
		3 * 2
			2 * 1
				1 * 1
					1

*/
					
int main(){
	
	int a, b, cont = 1;
	
	scanf("%d",&a);
	
	for(b = 1;b <= a;b++){
		cont *= b;
		printf("Cont = %d\n",cont);
	}
	return 0;
}
