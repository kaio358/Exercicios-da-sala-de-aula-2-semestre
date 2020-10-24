#include<stdio.h>
int main (){
	unsigned int a,ab,b;
	printf("Insira o valor da aresta \n");
	scanf("%u",&a);
	printf("Insira o valor da aresta base\n");
	scanf("%u",&b);
	ab=a*b;
	printf("O valor do paralepipedo %u\n",ab);
	return 0 ;
}
