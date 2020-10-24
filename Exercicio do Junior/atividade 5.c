#include<stdio.h>
#include<math.h>
int main (){
	float r,al,pi=3.1418,g;
	printf("Encontra o valor do raio\n");
	printf("Informe o valor da Area da lateral de um cone\n");
	scanf("%f",&al);
	printf("Informe o valor da geratriz \n");
	scanf("%f",&g);
	r = al/(pi*g);
	printf("O valor do raio : %f \n",r);
	return 0;
}
