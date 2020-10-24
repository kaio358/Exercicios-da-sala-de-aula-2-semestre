#include<stdio.h>
#include<math.h>
int main(){
	float r,al,pi=3.1418,h;
	printf("Informe o valor da area lateral\n");
	scanf("%f",&al);
	printf("Insira o valor do raio\n");
	scanf("%f",&r);
    h=al/(2*r*pi);
	printf("O valor da altura e de %f",h);
return 0;
}

