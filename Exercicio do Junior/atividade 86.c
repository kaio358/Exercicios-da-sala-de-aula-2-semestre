#include<stdio.h>
void maior (int a,int b,int c){
	if ((a>b)&&(a>c)){
		printf("%d e o maior\n",a);
	}
	if ((b>a)&&(b>c)){
		printf("%d e o maior\n",b);
	}
	if ((c>b)&&(c>a)){
		printf("%d e o maior\n",c);
	}
	if ((a==b)&&(a==c)){
		printf("inexistente\n");
	}
}
void medio (int a ,int b , int c){
	if ((a>b)&&(a<c)||(a<b)&&(a>c)){
		printf("A mediana dos valores e de %d\n",a);
	}
	if ((b>a)&&(b<c)||(b<a)&&(b>c)){
		printf("A mediana dos valores e de %d\n",b);
	}
	if ((c>b)&&(c<a)||(c<b)&&(c>a)){
		printf("A mediana dos valores e de %d\n",c);
	}
}
int main (){
	int a,b,c;
	printf("Informe 1 numero\n");
	scanf("%d",&a);
	printf("Informe 2 numero\n");
	scanf("%d",&b);
	printf("Informe 3 numero\n");
	scanf("%d",&c);
	maior(a,b,c);
	medio(a,b,c);
	return 0;
}
