#include<stdio.h>
int main (){
	float ab,v,h;
	printf("Insiria o valor da altura  ");
	scanf("%f",&h);
	printf("Insira o valor da area da base  ");
	scanf("%f",&ab);
	v = (ab/3)*h;
	printf("O valor do volume e de %.2f",v);
	return 0 ;
}
