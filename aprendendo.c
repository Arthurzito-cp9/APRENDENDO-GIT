#include <stdio.h>

int main(){
	float m, n1, n2;
	
	printf("Insira a primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Insira a segunda nota: \n");
	scanf("%f", &n2);
	
	m = (n1 + n2) / 2;
	
	printf("A sua media e igual a %.2f", &m);
	
	return 0;
}
