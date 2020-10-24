#include <stdio.h>
int main (){
	unsigned int ab,a,b;
	printf("Insira o valor da areta lateral\n");
	scanf("%u",&a);
	printf("Insira o valor do paralepipedo da base \n");
	scanf("%u",&ab);
	b= ab/a;
	printf("O valor da areta da base %u",a);
	return 0;
}
