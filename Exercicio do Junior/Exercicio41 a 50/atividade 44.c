#include<stdio.h>
int main (){
	float al,n,a;
	printf("Informe o valor da area lateral do prisma \n");
	scanf("%f",&al);
	printf("Informe o valor da face do prisma\n");
	scanf("%f",&a);
    n=al/a;
	printf("O numero de lados e de %.2f",n);
	return 0;
}
