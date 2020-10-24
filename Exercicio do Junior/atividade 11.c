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
			printf("Informe o valor do volume do cone\n");
			scanf("%f",&v);
			r=r/2;
			h=v/((pi/3)*pow(r,2));
			printf("A altura do cone e %f\n",h);
		break;
		case 2 :
		    printf("Informe o valor do raio\n");
	    	scanf("%lf",&r);
			printf("Informe o valor do volume do cone\n");
			scanf("%f",&v);	
			h=v/((pi/3)*pow(r,2));
			printf("A altura do cone e %f\n",h);
		break;
		default :
			printf("Erro, numero digitado não apresenta no banco de dados\n");
	}
	return 0;
}
