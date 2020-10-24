#include<stdio.h>
#include<math.h>
int main (){
	float at,pi=3.1418,g;
	double t,r1,r2;
	printf("Encontra o valor do raio\n");
	printf("Informe o valor da Area de cone\n");
	scanf("%f",&at);
	printf("Informe o valor da geratriz \n");
	scanf("%f",&g);
	t= pi+4*pi*g*at;
	r1= (-pi+sqrt(t))/2*pi*g;
	r2= (-pi-sqrt(t))/2*pi*g;
		printf("O valor do raio 1 : %.2f ",r1);
		printf("O valor do raio 2: %.2f ",r2);
	return 0;
}
