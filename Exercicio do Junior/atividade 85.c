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
void menor (int a,int b, int c){
	if ((a<b)&&(a<c)){
		printf("%d e o menor\n",a);
	}
	if ((b<a)&&(b<c)){
		printf("%d e o menor\n",b);
	}
	if ((c<b)&&(c<a)){
		printf("%d e o menor\n",c);
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
	menor(a,b,c);
	return 0;
}
