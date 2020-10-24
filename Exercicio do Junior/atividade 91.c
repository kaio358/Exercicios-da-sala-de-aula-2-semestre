#include<stdio.h>
int main (){
	float p1,p2,p3,media;
	printf("Informe o valor da nota tirada prova 1 \n");
	scanf("%f",&p1);
	printf("Informe o valor da nota tirada prova 2 \n");
	scanf("%f",&p2);
	printf("Informe o valor da nota tirada prova 3 \n");
	scanf("%f",&p3);
	media = (p1*2+p2*3+p3*5)/10;
	printf("A media final e de %.2f",media);
	return 0;
}
