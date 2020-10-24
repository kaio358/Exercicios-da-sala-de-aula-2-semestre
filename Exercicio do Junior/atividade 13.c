#include<stdio.h>
#include<math.h>
int main (){
	double at,a;
	printf("Insira o valor da area do cubo\n");
	scanf("%lf",&at);
	a=sqrt(at/6);
	printf("O valor da aresta e de %lf\n",a);
	return 0;
}
