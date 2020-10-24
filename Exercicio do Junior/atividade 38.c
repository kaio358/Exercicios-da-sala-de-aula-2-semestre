#include<stdio.h>
#include<math.h>
int main (){
	double r,h,pi=3.1418,v;
	printf("Informe o valor do volume do cilindro\n");
	scanf("%lf",&v);
	printf("Informe o valor do raio\n");
	scanf("%lf",&r);
	h=v/(pi*pow(r,2));
	printf("Altura tem o valor de %.2lf",h);
	return 0;
}
