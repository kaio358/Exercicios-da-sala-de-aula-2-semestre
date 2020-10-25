#include<stdio.h>
int main (){
	float v,t;
	printf("Informe o valor da venda dos carros\n");
	scanf("%f",&v);
	v=v*0.05;
	t=998+50+v;
	printf("Salario total do vendedor e de %.2f",t);
	return 0;
}
