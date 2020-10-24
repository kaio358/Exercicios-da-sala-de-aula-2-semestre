#include<stdio.h>
int main (){
	float s,h;
	printf("Informe o valor de segundos\n");
	scanf("%f",&s);
	h= (s/360);
	printf("O valor da hora e de %.2f\n",h);
	return 0;
}
