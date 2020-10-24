#include<stdio.h>
int main (){
	float c,d,t,cont=0,v1,v2,cont2=0,cont3=0,v3,contt;
	printf("Infome o valor da compra\n");
	scanf("%f",&c);
	printf("Informe o valor que sera pago \n");
	scanf("%f",&d);
	t=c-d;
	if(t==0){
		printf("tudo certo\n");
		printf("troco : %f\n",t);
	}
	if (t<0){
		if (t<= -100){
		for (t;t< -99;t+=100){
			cont++;
			v1+=100;
		}
	    }
		if ((t>= -99)&&(t<= -10)){
		for (t;t< -9;t+=10){
			cont2++;
			v2+=10;
		}
		}
		if ((t>= -9)&&(t< 0)){
		for (t;t< 0;t++){
			cont3++;
			v3++;
		}
	    }
	contt=v1+v2+v3;
	printf("Valor da compra : %.2f\n",c);
	printf("Valor pago : %.2f\n",d);
	printf("Troco a se devolvido e de : %.2f\n",contt);
	printf ("Notas de 100 : %.2f \n",cont);
	printf("Valor de troco de nota de 100 : %.2f\n",v1);
	printf("Notas de 10 : %.2f\n",cont2);
	printf("Valor de troco de nota de 10 : %.2f\n",v2);
	printf("Notas de 1 : %.2f \n",cont3);
	printf("Valor de troco de nota de 1 : %.2f\n",v3);
	}
	if (t>0){
		printf("Consumidor esta devendo \n");
		printf("Deve-se : %f",t);
	}
	return 0 ;
}
