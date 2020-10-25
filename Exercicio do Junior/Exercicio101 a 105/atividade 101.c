#include<stdio.h>
#include<math.h>
int main (){
	float valor_qualquer;
	int tipo;
	printf("Informe um valor \n");
	scanf("%f",&valor_qualquer);
	printf("Digite o numero para o seguinte calculos\n");
	printf("101-Raiz quadrada\n");
    printf("102-A metade\n");
    printf("103-10% do numero\n");
    printf("104-O dobro\n");
    scanf("%d",&tipo);
    switch (tipo){
    	case 101:
    		valor_qualquer=sqrt(valor_qualquer);
    		printf("Resultado : %.2f",valor_qualquer);
    	break;
    	case 102:
    		valor_qualquer = valor_qualquer/2;
    		printf("Resultado : %.2f",valor_qualquer);
    	break;
    	case 103:
    		valor_qualquer = valor_qualquer*0.10;
    		printf("Resultado : %.2f",valor_qualquer);
    	break;
    	case 104:
    		valor_qualquer = valor_qualquer*2;
    		printf("Resultado : %.2f",valor_qualquer);
    	break;
	}
	return 0;
}
