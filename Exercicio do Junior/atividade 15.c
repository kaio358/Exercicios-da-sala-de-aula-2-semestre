#include<stdio.h>
#include<math.h>
int main (){
	double v,a;
	printf("Insira o valor do volume do cubo\n");
	scanf("%lf",&v);
	a=cbrt(v);
	printf("O valor da aresta e de %lf",a);
	return 0;
}
