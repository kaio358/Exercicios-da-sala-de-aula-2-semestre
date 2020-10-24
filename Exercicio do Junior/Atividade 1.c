#include<stdio.h>
#include<math.h>
int main (){
float ab, pi = 3.1418;
int x;
double r;
printf("Escolha\n");
printf("Digite 1 para diametro\n");
printf("Digite 2 para raio\n");
scanf("%d",&x);
	switch (x){
	case 1 :
	printf("Insira o valor do Diametro\n");
	scanf("%lf",&r);
	r = r/2;
	ab = pi*pow(r,2);
	printf("O valor da area da circuferencia e %lf\n",ab);
	break;
	case 2 :
	printf("Insira o valor do Raio\n");
	scanf("%lf",&r);
	ab = pi*pow(r,2);
	printf("O valor da area da circuferencia e %lf\n",ab);
	break;
	default :
	printf("Erro ");
    }
return 0 ;
}
