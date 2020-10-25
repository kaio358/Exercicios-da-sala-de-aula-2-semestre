#include<stdio.h>
int main (){
	float v,ab,h;
	printf("Informe o valor da altura \n");
	scanf("%f",&h);
	printf("Informe o valor do volume \n");
	scanf("%f",&v);
	ab=v/h;
	printf("O valor da area da base e de %.2f",ab);
	return 0 ;
}
