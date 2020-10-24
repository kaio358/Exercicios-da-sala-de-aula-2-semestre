#include<stdio.h>
int main (){
	float ab,v,h;
	printf("Insiria o valor do volume da piramide  ");
	scanf("%f",&v);
	printf("Insira o valor da area da base  ");
	scanf("%f",&ab);
	h = v/(ab/3);
	printf("O valor da altura e de %.2f",h);
	return 0 ;
}
