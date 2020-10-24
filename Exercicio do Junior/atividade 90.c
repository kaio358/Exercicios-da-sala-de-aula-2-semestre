#include<stdio.h>
int main (){
	float n;
	printf("Informe um valor \n");
	scanf("%f",&n);
	if (n<=10){
		printf("F1\n");
	}
	if ((n>10)&&(n<=100)){
		printf("F2\n");
	}
	if (n>100){
		printf("F3\n");
	}
	return 0;
}
