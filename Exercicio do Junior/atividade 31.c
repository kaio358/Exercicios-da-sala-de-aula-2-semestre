#include<stdio.h>
#include<math.h>
int main(){
	float r,al,pi=3.1418,h;
	printf("Informe o valor da area lateral\n");
	scanf("%f",&al);
	printf("Insira o valor da altura\n");
	scanf("%f",&h);
    r=al/(2*h*pi);
	printf("O valor do raio e de %f",r);
return 0;
}

