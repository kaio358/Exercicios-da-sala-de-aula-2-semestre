#include<stdio.h>
int main (){
	int a,b,c;
	printf("Informe 1 numero\n");
	scanf("%d",&a);
	printf("Informe 2 numero\n");
	scanf("%d",&b);
	printf("Informe 3 numero\n");
	scanf("%d",&c);
	if ((a==b)&&(a!=c)){
		printf("%d igual %d\n",a,b);
	}
	if ((b!=a)&&(b==c)){
		printf("%d igual %d\n",b,c);
	}
	if ((c!=b)&&(c==a)){
		printf("%d igual %d\n",c,a);
	}
	if ((a==b)&&(a==c)){
		printf("Todos iguais\n");
	}
	if ((a>b)&&(a<c)||(a<b)&&(a>c)){
		printf("A mediana dos valores e de %d\n",a);
	}
	if ((b>a)&&(b<c)||(b<a)&&(b>c)){
		printf("A mediana dos valores e de %d\n",b);
	}
	if ((c>b)&&(c<a)||(c<b)&&(c>a)){
		printf("A mediana dos valores e de %d\n",c);
	}
	return 0;
}
