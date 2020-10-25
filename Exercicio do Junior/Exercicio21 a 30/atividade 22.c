#include<stdio.h>
int main (){
	unsigned int al,ab,at;
	printf("Insira o valor da area lateral  ");
	scanf("%u",&al);
	printf("Insira o valor da area da base  ");
	scanf("%u",&ab);
	at=al+ab;
	printf("O valor da area total e de %u"  ,at);
	return 0;
}
