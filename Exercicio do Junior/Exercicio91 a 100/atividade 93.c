#include<stdio.h>
int main (){
	float p,m,cg,media;
	char nome[500];
	printf("Informe o nome \n");
	scanf("%s",nome);
	printf("Informe a nota de portugues \n");
	scanf("%f",&p);
	printf("Informe a nota de matematica \n");
	scanf("%f",&m);
	printf("Informe a nota de conhecimentos gerais \n");
	scanf("%f",&cg);
	media = (p+m+cg)/3;
	if ((media>=7)&&(p>=5)&&(m>=5)&&(cg>=5)){
		printf("Nome : %s\n",nome);
		printf("Portugues : %.2f\n",p);
		printf("Matematica : %.2f\n",m);
		printf("Conhecimentos gerais : %.2f\n",cg);
		printf("Media : %.2f\n",media);
		printf("Aprovado\n");
	}else {
		printf("Nome : %s\n",nome);
		printf("Portugues : %.2f\n",p);
		printf("Matematica : %.2f\n",m);
		printf("Conhecimentos gerais : %.2f\n",cg);
		printf("Media : %.2f\n",media);
		printf("Reprovado\n");
	}
	return 0;
}
