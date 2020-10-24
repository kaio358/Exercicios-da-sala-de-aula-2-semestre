#include<stdio.h>
#include<math.h>
int main (){
	float pi=3.1418,v;
	double r;
	printf("informe o valor do raio\n");
	scanf("%lf",&r);
	v=(4*pi*pow(r,3))/3;
	printf("Volume da Esfera e de %f\n",v);
	return 0;
}
