#include<stdio.h>
#include<math.h>
int main (){
	double ab,r,pi=3.1418;
	printf("Insira o valor da base do cilindro\n");
	scanf("%lf",&ab);
	r = sqrt(ab/pi);
	printf("O valor do raio %lf",r);
	return 0;
}
