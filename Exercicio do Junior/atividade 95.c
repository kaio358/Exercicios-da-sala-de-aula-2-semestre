#include<stdio.h>
int main (){
	int a,b,c;
	printf("Informe o valor A\n");
	scanf("%d",&a);
	printf("Informe o valor B\n");
	scanf("%d",&b);
	printf("Informe o valor C\n");
	scanf("%d",&c);
	if (a+b>c){
		printf("A + B e maior que c");
	}
	if (a+b<c){
		printf("A + B e menor que c");
	}
	if (a+b==c){
		printf("A + B e igual a c");
	}
	return 0;
}
