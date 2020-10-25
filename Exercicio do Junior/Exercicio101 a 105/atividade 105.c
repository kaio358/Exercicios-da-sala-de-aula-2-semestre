#include<stdio.h>
int main (){
	int idade[45],i,md;
	float altura[45],ma;
	for (i=0;i<45;i++){
		printf("Insira a idade\n");
		scanf("%d",&idade[i]);
		printf("Insira a altura \n");
		scanf("%f",&altura[i]);
		if (altura[i]<=1.70){
		md= idade[i]+md;
		}
		if (idade[i]>=20){
		ma= ma+altura[i];
		}
	}
	md = md/(i+1);
	printf("A idade media dos alunos com menos de 1,70m de altura e de %d \n",md);
	ma= ma/(i+1);
	printf("A altura media dos alunos com mais de 20 anos e de %.2f \n",ma);
	return 0;
}
