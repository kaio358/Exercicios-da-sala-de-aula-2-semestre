#include<stdio.h>
int main (){
	float a;
	int b;
	printf("Informe um n�mero real com duas casas decimais\n");
	scanf("%f",&a);
	a=a*100;
	b= (int)a;
	printf("%d\n",b);
	return 0 ;
}
