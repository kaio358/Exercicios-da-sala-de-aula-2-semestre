#include<stdio.h>
#include<math.h>
int main (){
	int Int1,Int2,resultado;
	printf("Informe o dividendo\n");
	scanf("%d",&Int1);
	printf("Informe o divisor\n");
	scanf("%d",&Int2);
	resultado = Int1/Int2;
	printf("O quociente e %d\n",resultado);
	resultado = Int1%Int2;
	printf("O resto e %d\n",resultado);
	return 0 ;
}
