#include<stdio.h>
int main (){
	float m,h;
	printf("Informe o valor de minutos\n");
	scanf("%f",&m);
	h= m/60;
	printf("O valor da hora e de %.2f\n",h);
	return 0;
}
