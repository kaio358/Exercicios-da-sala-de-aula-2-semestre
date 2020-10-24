#include<stdio.h>
int main (){
	int al,ab,at;
	printf("Insira o valor da area da base total  ");
	scanf("%d",&at);
	printf("Insira o valor da area da lateral  ");
	scanf("%d",&al);
	ab=at-al;
	printf("O valor da area da base e de %d",ab);
	return 0;
}
