#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,e,v,s;
	printf("Informe 5 valores\n");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	s=6*a+5*b+4*c+3*d+2*e;
	v=s/7;
	printf("O resultado e de %f\n",v);
	return 0 ;
}
