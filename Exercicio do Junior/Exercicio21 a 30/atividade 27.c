#include<stdio.h>
int main (){
	float ab,v,h;
	printf("Insiria o valor da altura  ");
	scanf("%f",&h);
	printf("Insira o valor do volume  ");
	scanf("%f",&v);
	ab = (3*v)/h;
	printf("O valor da area base e de %.2f",ab);
	return 0 ;
}
