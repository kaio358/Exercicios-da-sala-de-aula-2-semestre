#include<stdio.h>
int main (){
	float sl,sb,at;
	printf("Informe o valor da soma das areas das faces laterias\n");
	scanf("%f",&sl);
	printf("Informe o valor da soma das areas das bases\n");
	scanf("%f",&sb);
	at=sl+2*sb;
	printf("O valor da area total e de %.2f\n",at);
	return 0;
}
