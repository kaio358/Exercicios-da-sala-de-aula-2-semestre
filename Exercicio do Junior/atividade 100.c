#include<stdio.h>
int main (){
	int x,y,z;
	printf("Informe o valor do X\n");
	scanf("%d",&x);
	printf("Informe o valor do Y\n");
	scanf("%d",&y);
	printf("Informe o valor do Z\n");
	scanf("%d",&z);
	if ((x>0)&&(y>0)&&(z>0)){
		if((x==y)&&(y==z)){
			printf("Triangulo Equilatero\n");
		}
		if((x!=y)&&(y==z)||(x==y)&&(y!=z)||(x==y)&&(z!=y)||(x==z)&&(y!=z)){
			printf("Triangulo Isosceles\n");
		}
		if ((x!=y)&&(y!=z)&&(z!=x)){
			printf("Triangulo Escaleno\n");
		}
	}else {
		printf("Desculpe mas os valores dados nao forma um triangulo \n");
	}
	return 0;
}
