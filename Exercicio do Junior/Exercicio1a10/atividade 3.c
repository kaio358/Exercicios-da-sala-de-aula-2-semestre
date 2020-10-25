#include<stdio.h>
int main (){
	float ar,r,pi=3.1418,g;
	printf("Algoritmo que calcule a area lateral de um cone \n");
	printf("Insira o valor da geratriz \n");
	scanf("%f",&g);
	printf("Insira o valor do raio \n");
	scanf("%f",&r);
	ar = r*pi*g;
	printf("area lateral de um cone : %f \n",ar);
	return 0;
}
