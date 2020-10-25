#include<stdio.h>
void conferir (int d,int m,int a,int diferenca) {
	if ((d>=1)&&(d<=30)){
		if((m>=1)&&(m<=12)){
			if((a>=0)&&(a<=2017)){
				cal(d,m,a,diferenca);
			}
		}
	}
		
}
void cal(int d,int m,int a,int diferenca){
	diferenca =   365*2017 + 30*1 + 1 - 365*a - 30*m - d;
	printf("Dias que ja se passaram foram %d\n",diferenca);
}
int main (){
	int d,m,a,diferenca;
	printf("Informe o dia do nascimento\n");
	scanf("%d",&d);
	printf("Informe o mes de nascimento \n");
	scanf("%d",&m);
	printf("Informe o ano de nascimento\n");
	scanf("%d",&a);
	conferir (d,m,a,diferenca);
	return 0;
}
