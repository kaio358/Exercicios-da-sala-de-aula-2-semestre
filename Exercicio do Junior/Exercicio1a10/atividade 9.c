#include<stdio.h>
#include<math.h>
int main (){
	float v,pi=3.1418,h;
	double r;
	int x;
	printf("Insira o numero para determinar qual segmento\n");
	printf("1 Diametro \n");
	printf("2 Raio\n");
	scanf("%d",&x);
	switch (x){
		case 1 :
			printf("Informe o valor do diametro\n");
			scanf("%lf",&r);
			printf("Informe o valor da altura\n");
			scanf("%f",&h);
			r=r/2;
			v=(pi/3)*pow(r,2)*h;
			printf("O volume do cone e %f\n",v);
		break;
		case 2 :
		    printf("Informe o valor do raio\n");
	    	scanf("%lf",&r);
			printf("Informe o valor da altura\n");
			scanf("%f",&h);	
			v=(pi/3)*pow(r,2)*h;
			printf("O volume do cone e %f\n",v);
		break;
		default :
			printf("Erro, numero digitado não apresenta no banco de dados\n");
	}
	return 0;
}
