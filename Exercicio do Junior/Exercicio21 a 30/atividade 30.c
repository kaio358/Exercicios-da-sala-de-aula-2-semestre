#include<stdio.h>
#include<math.h>
int main (){
	float r,pi=3.1418,al,h;
	int x;
	printf("Escolha digitando o numero para o segmento desejado\n");
	printf("1 Diametro\n");
	printf("2 Raio\n");
	scanf("%d",&x);
	switch (x){
		case 1 :
		   printf("Insira o valor do diametro\n");
		   scanf("%f",&r);
		   printf("Insira o valor da altura\n");
		   scanf("%f",&h);
		   r=r/2;
		   al =2*pi*r*h;
		   printf("O valor da area lateral do cilindro e de %f\n",al);
		break;
		case 2 :
		   printf("Insira o valor do raio\n");
		   scanf("%f",&r);
		   printf("Insira o valor da altura\n");
		   scanf("%f",&h);
		   al =2*pi*r*h;
		   printf("O valor da area lateral do cilindro e de %f\n",al);
		break;
		default :
			printf("Erro");
	}
	return 0;
}
