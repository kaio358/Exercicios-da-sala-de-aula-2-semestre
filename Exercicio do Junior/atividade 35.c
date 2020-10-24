#include<stdio.h>
#include<math.h>
int main (){
	double at,h,pi=3.1418,r;
	printf("Insira o valor da da altura\n");
	scanf("%lf",&h);
	printf("Insira o valor da area total do cilindro\n");
	scanf("%lf",&at);
	r= (sqrt(at/pow(2,4)*pi*h))/2;
	printf("O valor do raio e de %lf\n",r);
	return 0;
}
