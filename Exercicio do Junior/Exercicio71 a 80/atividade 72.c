#include<stdio.h>
int main (){
	int a,d;
	printf("Insira o ano de nascimento \n");
	scanf("%d",&a);
	if ((a>=0)&&(a<2017)){
	d=(2017-a)*365;
	printf("dias do nascimento ate 2017 e de %d",d);
    }
	return 0;
}
