#include<stdio.h>
#include<math.h>
int main (){
	int x;
	double a,b;
	printf("Informe um valor \n");
	scanf("%d",&x);
	a = (double)pow(x,2)+1;
	b= (double)pow(x,3)+3;
	printf("Primeiro valor e de %.2lf\n",a);
	printf("Segundo valor e de %.2lf\n",b);
	return 0;
}
