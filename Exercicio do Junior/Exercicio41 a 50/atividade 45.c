#include<stdio.h>
int main (){
	float al,n,a;
	printf("Informe o numero de lados\n");
	scanf("%f",&n);
	if (n>2){
	printf("Informe o valor da area lateral do prisma\n");
	scanf("%f",&al);
	a=al/n;
	printf("O valor da face do prisma e de %.2f",a);
	} else{
		printf("Desculpa mas não existe prisma com numero de lados igual ou menor que dois");
	}
	return 0;
}
