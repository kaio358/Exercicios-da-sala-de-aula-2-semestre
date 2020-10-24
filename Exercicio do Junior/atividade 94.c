#include <stdio.h>
int main (){
	float v,p,c;
	char nome[5000];
	do {
	printf("Informe o nome do corretor \n");
	scanf("%s",nome);
	printf("Informe o valor da venda acumuladas \n");
	scanf("%f",&v);
	if (v>50000000){
		p=v*0.12;
		printf("Nome : %s\n",nome);
		printf("Nota do valor das vendas : %.2f\n",v);
		printf("A comessao se paga e de %.2f\n",p);
	}
	if((v<=50000000)&&(v>=30000000)){
		p=v*0.095;
		printf("Nome : %s\n",nome);
		printf("Nota do valor das vendas : %.2f\n",v);
		printf("A comessao se paga e de %.2f\n",p);
	}
	if (v<30000000){
		p=v*0.07;
		printf("Nome : %s\n",nome);
		printf("Nota do valor das vendas : %.2f\n",v);
		printf("A comessao se paga e de %.2f\n",p);
	}
c++;
}while (c<3);
	return 0 ;
}
