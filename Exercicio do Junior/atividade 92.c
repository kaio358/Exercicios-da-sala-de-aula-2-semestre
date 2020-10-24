#include<stdio.h>
int main (){
	int a,b,c;
	printf("Informe 3 valores \n");
	scanf("%d%d%d",&a,&b,&c);
	if ((a>b)&&(a>c)&&(b>c)){
		printf("%d%d%d\n",c,b,a);
	}
	if ((a>b)&&(a>c)&&(b<c)){
		printf("%d%d%d\n",b,c,a);
	}
	if ((b>a)&&(b>c)&&(a>c)){
		printf("%d%d%d\n",c,a,b);
	}
	if ((b>a)&&(b>c)&&(a<c)){
		printf("%d%d%d\n",a,c,b);
	}
	if ((c>b)&&(c>a)&&(a>b)){
		printf("%d%d%d\n",b,a,c);
	}
	if ((c>b)&&(c>a)&&(a<b)){
		printf("%d%d%d\n",a,b,c);
	}
	if ((c==b)&&(a==b)){
		printf("Todos iguais\n");
	}
	return 0;
}
