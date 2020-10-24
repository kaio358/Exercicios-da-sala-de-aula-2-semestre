#include<stdio.h>
#include<math.h>
int main (){
	float h,pi=3.1418,v;
	double r;
	printf("Informe o valor do raio\n");
	scanf("%lf",&r);
	printf("Informe o valor da altura\n");
	scanf("%f",&h);
	v=pi*pow(r,2)*h;
	printf("O volume do cilindro e de %f",v);
	return 0;
}
