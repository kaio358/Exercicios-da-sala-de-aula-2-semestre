#include<stdio.h>
#include<math.h>
int main (){
	double r, pi=3.1418,v;
	printf("informe o valor do volume da esfera\n");
	scanf("%lf",&v);
	r=cbrt((v*3)/pi);
	printf("O valor do raio e de e de %lf\n",r);
	return 0;
}
