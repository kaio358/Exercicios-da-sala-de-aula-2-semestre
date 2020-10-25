#include<stdio.h>
#include<math.h>
int main (){
	float r;
	double pi=3.1418,v,h;
	printf("Insira o valor do Volume do cone\n");
	scanf("%lf",&v);
	printf("Insira o valor da altura\n");
	scanf("%lf",&h);
	pi = pi/3;
	r= sqrt(v/(pi*h));
	printf("O valor do raio e %f\n",r); 
	return 0;
}
