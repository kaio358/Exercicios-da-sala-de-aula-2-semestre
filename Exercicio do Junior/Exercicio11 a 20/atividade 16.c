#include<stdio.h>
int main (){
	unsigned int a,l,p,v;
	printf("Insira o valor da altura\n");
	scanf("%u",&a);
	printf("Insira o valor da largura\n");
	scanf("%u",&l);
	printf("Insira o valor da profundidade\n");
	scanf("%u",&p);
	v= a*l*p;
	printf("O volume do cubo e de %u",v);
	return 0;
}
