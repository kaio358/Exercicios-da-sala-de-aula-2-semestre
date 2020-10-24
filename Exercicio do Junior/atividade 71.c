#include<stdio.h>
void data (int d,int s, int a){
	if ((d>=0)&&(d<=9)){
		printf("%d%d00%d\n",a,s,d);
		d++;
	}
	if ((d>=10)&&(d<=99)){
		printf("%d%d0%d\n",a,s,d);
		d++;
	}
	if ((d>=100)&&(d<=999)){
		printf("%d%d%d\n",a,s,d);
		d++;
	}
}
void ip (int s,int a, int d){
if (s==1) {
	s++;
	data(d,s,a);
}
if (s==2){
s--;
data(d,s,a);
}
}
int main (){
	int a,d=0,y,s=1;
	do {
		printf("Informe o ultimo ano de registro de matricula \n");
		scanf("%d",&a);
		d++;
		ip (s,a,d);
		printf("0 para finalizar 1 para continuar\n");
		scanf("%d",&y);
	}while (y==1);
	return 0;
}
