#include<stdio.h>
#include<math.h>
int main (){
	float pi = 3.1418,at,h;
	double r;
	int d ;
	printf("Escolha o segmento, digitando o numero\n");
	printf("1 Diametro\n");
	printf("2 Raio\n");
	scanf("%d",&d);
	switch (d){
		case 1 :
			printf("Insira o valor do Diametro\n");
			scanf("%lf",&r);
			printf("Informe o valor da altura\n");
			scanf("%lf",&h);
			r = r/2;
			at = 2*(pi*pow(r,2))+ 2*(pi*r*h);
			printf("O valor da area do cilindro e de %f\n",at);
		break;
		case 2 :
			printf("Insira o valor do raio\n");
			scanf("%lf",&r);
			printf("Informe o valor da altura\n");
			scanf("%lf",&h);
			at = 2*(pi*pow(r,2))+ 2*(pi*r*h);
			printf("O valor da area do cilindro e de %f\n",at);
		break;
		default :
			printf("ERRO\n");
	}
	return 0;
}
