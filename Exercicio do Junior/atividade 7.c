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
			printf("Insira o valor da area\n");
			scanf("%f",&at);
			r = r/2;
			g= (at-r)/(pi*r);
			printf("Geratiz e %f \n",g);
		break ;
		case 2 :
		    printf("Insira o valor do raio \n");
			scanf("%f",&r);
			printf("Insira o valor da Area\n");
			scanf("%f",&at);
		    g= (at-r)/(pi*r);
			printf("Geratiz e %f \n",g);
		break;
		default :
			printf("Erro \n");
	}
	return 0;
}
