#include<stdio.h>
#include<math.h>
int main (){
	double A,B,C;
	printf("Informe o valor do B\n");
	scanf("%lf",&B);
	printf("Informe o valor do C\n");
	scanf("%lf",&C);
	A=sqrt(pow(B,2)+pow(C,2));
	printf("O resultado da hipotenusa e de %.2lf\n",A);
	return 0;
}
