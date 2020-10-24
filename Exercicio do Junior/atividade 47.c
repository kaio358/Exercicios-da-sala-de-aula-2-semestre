#include<stdio.h>
int main (){
	float sl,sb,at;
	printf("Informe o valor da area total laterias\n");
	scanf("%f",&at);
	printf("Informe o valor da soma das areas das bases\n");
	scanf("%f",&sb);
	sl=at-2*sb;
	printf("O valor da soma das areas das faces e de %.2f\n",sl);
	return 0 ;
}
