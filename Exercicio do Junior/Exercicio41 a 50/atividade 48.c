#include<stdio.h>
int main (){
	float sl,sb,at;
	printf("Informe o valor da soma das areas das faces laterias\n");
	scanf("%f",&sl);
	printf("Informe o valor da area total \n");
	scanf("%f",&at);
	sb=(at-sl)/2;
	printf("O valor da soma das areas das bases e de %.2f\n",sb);
	return 0;
}
