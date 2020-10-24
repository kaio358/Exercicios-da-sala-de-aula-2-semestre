#include<stdio.h>
#include<math.h>
int main (){
	int at;
	double a;
	printf("Informe o valor da aresta\n");
	scanf("%lf",&a);
	at= 6*pow(a,2);
	printf("A area do cubo e de %d\n",at);
	return 0;
}
