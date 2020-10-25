#include<stdio.h>
int main (){
	int nota1,nota2,nota3,freq;
	float media;
	printf("Informe a nota 1 \n");
	scanf("%d",&nota1);
	printf("Informe a nota 2 \n");
	scanf("%d",&nota2);
	printf("Informe a nota 3 \n");
	scanf("%d",&nota3);
	printf("Informe a frequencia \n");
	scanf("%d",&freq);
	media = (nota1+nota2+nota3)/3;
	freq=(100*freq)/200;
	if ((media >=7)&&(freq>=25)){
		printf("Aprovado\n");
	}
	if ((media<7)||(freq<25)){
		if (media<7){
			printf("reprovado por nota\n");
		}
		if (freq<50){
			printf("reprovado por falta\n");
		}
	}
	return 0;
}
