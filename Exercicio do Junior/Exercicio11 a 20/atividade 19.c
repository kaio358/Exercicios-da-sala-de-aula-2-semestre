#include <stdio.h>
int main (){
	unsigned int ab,a,b;
	printf("Insira o valor da aretas da base\n");
	scanf("%u",&b);
	printf("Insira o valor do paralepipedo da base \n");
	scanf("%u",&ab);
	a= ab/b;
	printf("O valor da areta lateral %u",a);
	return 0;
}
