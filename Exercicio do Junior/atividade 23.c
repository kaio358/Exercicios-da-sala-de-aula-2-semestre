#include<stdio.h>
int main (){
    int al,ab,at;
	printf("Insira o valor da area da base total  ");
	scanf("%d",&at);
	printf("Insira o valor da area da base  ");
	scanf("%d",&ab);
	al=at-ab;
	printf("O valor da area lateral e de %d",al);
	return 0;
}
