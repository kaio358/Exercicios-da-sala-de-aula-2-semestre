#include<stdio.h>
int main (){
	float t,tp1,tp2,tp3;
	int q,s,e;
	printf("TABELA DE PRECO DE PICOLE\n");
	printf("\n");
	printf("|Tipo     | Preco (R$) | Numero de codigo |\n");
	printf("|Picole 1 | 0.50       |          1       |\n");
	printf("|Picole 2 | 0.60       |          2       |\n");
	printf("|Picole 3 | 0.75       |          3       |\n");
	printf("\n");
	do{
		printf("Informe o numero de codigo do picole\n");
		scanf("%d",&e);
		switch (e){
			case 1:
				printf("Quantos ?\n");
				scanf("%d",&q);
				tp1=0.50*q;
				printf("Picole 1 : %.2f\n",tp1);
			break;
			case 2:
				printf("Quantos ?\n");
				scanf("%d",&q);
				tp2=0.60*q;
				printf("Picole 2 : %.2f\n",tp2);
			break;
			case 3:
				printf("Quantos ?\n");
				scanf("%d",&q);
				tp3=0.75*q;
				printf("Picole 3 : %.2f\n",tp3);
			break;
		}
		printf("Deseja continuar (0 para nao, 1 para sim)\n");
		scanf("%d",&s);
	}while(s==1);
	t=tp1+tp2+tp3;
	printf("Custara : R$ %.2f\n",t);
	return 0 ;
}
