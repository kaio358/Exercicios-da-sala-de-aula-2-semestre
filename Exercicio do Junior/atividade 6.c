#include<stdio.h>
#include<math.h>
int main (){
	float at,pi=3.1418,r,g;
	int x;
	printf("Escolha o numero para seguinte \n");
	printf("1 Diametro \n");
	printf("2 Raio \n");
	scanf("%d",&x);
	switch (x){
		case 1 :
			printf("Insira o valor do diametro \n");
			scanf("%f",&r);
			printf("Insira o valor da geratriz\n");
			scanf("%f",&g);
			r = r/2;
			at = pi*r*(r+g);
			printf("Area do Cone e %f \n",at);
		break ;
		case 2 :
		    printf("Insira o valor do raio \n");
			scanf("%f",&r);
			printf("Insira o valor da geratriz\n");
			scanf("%f",&g);
		    at = pi*r*(r+g);
			printf("Area do Cone e %f \n",at);
		break;
		default :
			printf("Erro \n");
	}
	return 0;
}
