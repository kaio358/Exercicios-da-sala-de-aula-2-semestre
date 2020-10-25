#include<stdio.h>
void tabela (){
	printf("TABELA DE PRECO\n");
    printf("\n");
    printf("|Peca mecanicas | Preco  | Numero de codigo |\n");
    printf("|Parafuso       |  0.50  |         1        |\n");
    printf("|Porca          |  0.35  |         2        |\n");
    printf("|Arruela        |  0.35  |         3        |\n");
    printf("\n");
}
int main (){
	float par,por,arr,t,tpar,tpor,tarr;
	char nome [50000];
	int ta,pe;
	printf("Nome : ");
	scanf("%s",nome);
	tabela();
	do{
    printf("Informe o numero de codigo da peca para comprar\n");
    scanf("%d",&pe);
    switch(pe){
    	case 1:
    		printf("Informe a quantidade sera levado \n");
    		scanf("%f",&par);
    		if (par>0){
    		tpar=0.50*par;
    		printf("%.2f\n",tpar);
    	    }else {
    	    	printf("Erro em insir o valor\n");
			}
    	break ;
    	case 2:
    		printf("Informe a quantidade sera levado \n");
    		scanf("%f",&por);
    		if (por>0){
    		tpor=0.35*por;
    		printf("%.2f\n",tpor);
            }else {
    	    	printf("Erro em insir o valor\n");
			}
    	break;
    	case 3:
    	    printf("Informe a quantidade sera levado \n");
    		scanf("%f",&arr);
    		if (arr>0){
    		tarr=0.35*arr;
    		printf("%.2f\n",tarr);
            }else {
    	    	printf("Erro em insir o valor\n");
			}
    	break;
    	default :
    		printf("desculpa mas nao temos essa linha de codigo\n");
	}
	printf("Digite 1 para continuar, qualquer numero para sair\n");
    scanf("%d",&ta);
   }while (ta==1);
   t=tpar+tpor+tarr;
   printf("O total de se pago : %.2f",t);
return 0;
}
