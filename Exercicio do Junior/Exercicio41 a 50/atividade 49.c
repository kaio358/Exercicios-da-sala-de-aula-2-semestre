#include<stdio.h>
int main (){
	float v,ab,h;
	printf("Informe o valor da altura\n");
	scanf("%f",&h);
	printf("Informe o valor da area da base\n");
	scanf("%f",&ab);
	v=ab*h;
	printf("O valor do volume e de %.2f",v);
	return 0 ;
}
