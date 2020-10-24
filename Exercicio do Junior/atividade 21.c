#include<stdio.h>
int main (){
	unsigned int a,b,c,v;
	printf("Insira o valor da aresta a \n");
	scanf("%u",&a);
	printf("Insira o valor da aresta b \n");
	scanf("%u",&b);
	printf("Insira o valor da aresta c \n");
	scanf("%u",&c);
	v = a*b*c;
	printf("O volume de um paralepipedo %u \n",v);
	return 0 ;
}
