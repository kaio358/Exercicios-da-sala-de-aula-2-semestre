#include<stdio.h>
int main (){
	float v,ab,h;
	printf("Informe o valor do volume \n");
	scanf("%f",&v);
	printf("Informe o valor da area da base \n");
	scanf("%f",&ab);
	h=v/ab;
	printf("O valor da altura e de %.2f",h);
	return 0 ;
}
