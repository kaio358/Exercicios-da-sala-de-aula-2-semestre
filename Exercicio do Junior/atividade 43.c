#include<stdio.h>
int main (){
	float al,n,a;
	printf("Informe o numero de lados\n");
	scanf("%f",&n);
	if (n>2){
	printf("Informe o valor da face do prisma\n");
	scanf("%f",&a);
	al=n*a;
	printf("O valor da area lateral do prisma e de %.2f",al);
	} else{
		printf("Desculpa mas não existe prisma com numero de lados igual ou menor que dois");
	}
	return 0;
}
