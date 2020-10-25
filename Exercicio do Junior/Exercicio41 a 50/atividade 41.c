#include<stdio.h>
#include<math.h>
int main (){
	float pi=3.1418,ae;
	double r;
	printf("informe o valor do raio\n");
	scanf("%lf",&r);
	ae=4*pi*pow(r,2);
	printf("Area da esfera tem o valor de %f\n",ae);
	return 0;
}
