#include<stdio.h>
#include<math.h>
int main (){
	int A,B;
	double C;
	printf("Informe o valor do primeiro\n");
	scanf("%d",&A);
	printf("Informe o valor do segundo\n");
	scanf("%d",&B);
	C=(double)sqrt(A+B);
	printf("O resultado e de %.2lf\n",C);
	return 0;
}
