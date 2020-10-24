#include<stdio.h>
#include<math.h>
int main (){
	float r;
	double ab,pi=3.1418;
	printf("Encontra o valor do raio\n");
	printf("Informe o valor da Area da base de uma circunferencia \n");
	scanf("%lf",&ab);
	r = sqrt(ab/pi);
	printf("O valor do raio : %f.2 ",r);
	return 0;
}
