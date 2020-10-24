#include<stdio.h>
#include<math.h>
int main (){
	int a,b,c,d,somac;
	printf("Informe 4 numeros que nao seja pelo menos 1 digito para cada um \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if((a>=0)&&(a<=9)&&(b>=0)&&(b<=9)&&(c>=0)&&(c<=9)&&(d>=0)&&(d<=9)){
	somac = pow(a,3)+pow(b,3)+pow(c,3)+pow(d,3);
    printf("%d\n",somac);
    }else {
    	printf("Temos um engracadinho tentando pular as regras\n");
	}
	return 0; 
}
