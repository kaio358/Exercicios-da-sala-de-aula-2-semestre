#include<stdio.h>
int main (){
	float m,c;
	printf("Informe o valor de centimetros \n");
	scanf("%f",&c);
	m= c/100;
	printf("O valor de metros e de %.2f\n",m);
	return 0;
}
