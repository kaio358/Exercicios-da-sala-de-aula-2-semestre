#include<stdio.h>
int main (){
	int a,b,c;
	printf("Informe 1 numero\n");
	scanf("%d",&a);
	printf("Informe 2 numero\n");
	scanf("%d",&b);
	printf("Informe 3 numero\n");
	scanf("%d",&c);
	if ((a<b)&&(a<c)){
		printf("%d e o menor\n",a);
	}
	if ((b<a)&&(b<c)){
		printf("%d e o menor\n",b);
	}
	if ((c<b)&&(c<a)){
		printf("%d e o menor\n",c);
	}
	if ((a==b)&&(a==c)){
		printf("inexistente\n");
	}
	return 0;
}
