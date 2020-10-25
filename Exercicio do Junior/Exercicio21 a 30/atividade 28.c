#include<stdio.h>
#include<math.h>
int main (){
	float pi=3.1418,ab;
	double r;
	int x;
	printf("Escolha o numero para seguinte segmento \n");
	printf("1 Diametro\n");
	printf("2 raio\n");
	scanf("%d",&x);
	switch (x){
		case 1 :
			printf("Insira o valor do diametro\n");
			scanf("%lf",&r);
			r=r/2;
			ab=pi*pow(r,2);
			printf("O valor da base do cilindro e de %.2f\n",ab);
		break;
		case 2 :
		    printf("Insira o valor do raio\n");
			scanf("%lf",&r);	
			ab=pi*pow(r,2);
			printf("O valor da base do cilindro e de %.2f\n",ab);
		break;
		default :
			printf("Erro\n");
	}
	return 0;
}
