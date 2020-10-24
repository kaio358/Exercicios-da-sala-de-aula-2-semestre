#include<stdio.h>
#include<math.h>
int main (){
	int v;
	double a;
	printf("Insira o valor das arestas \n");
	scanf("%lf",&a);
	v=pow(a,3);
	printf("O volume do cubo e %d",v);
	return 0 ;
}
