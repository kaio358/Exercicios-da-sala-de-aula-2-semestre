#include <math.h>
#include<stdio.h>
int main (){
	float at, pi =3.1418,h;
	double r;
	printf("Informe o valor do raio \n");
	scanf("%lf",&r);
	printf("Informe o valor da area total do cilindro \n");
	scanf("%f",&at);
	h= at/(2*(pi*r)+2*(pi*r));
	printf("Altura do cilindro e de %f",h);
	return 0;
}
