#include<stdio.h>
int main (){
	int a;
	printf("Informe o ano \n");
	scanf("%d",&a);
	if (a %4==0){
		printf("ano Bissexto\n");
	}else{
		printf("Nao e bissexto\n");
	}
	return 0;
}
