#include<stdio.h>
int main (){
	int c,d,u,n,m;
	printf("Informe um unico numero para centena de -9 ate 9\n");
	scanf("%d",&c);
	if ((c>=-9)&&(c<=9)){
		printf("Informe um unico numero para dezena de 0 ate 9\n");
	    scanf("%d",&d);
	    if ((d>=0)&&(d<=9)){
	       printf("Informe um unico numero para unidade de -9 ate 9\n");
	       scanf("%d",&u);
	       if ((u>=-9)&&(u<=9)){
	           printf("Valor normal : %d%d%d\n",c,d,u);
	           printf("Valor reverso : %d%d%d\n",u,d,c);
	       	   
	       }else {
	       	printf("erro");
		   }
		}
		else {
	       	printf("erro");
		   }
	}
	else {
	       	printf("erro");
		   }
return 0;
}
