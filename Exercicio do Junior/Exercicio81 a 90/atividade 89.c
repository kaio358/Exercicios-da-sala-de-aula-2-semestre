#include<stdio.h>
int digito (int x){
	int i=0;
	while (x>0){
		i=i*10+(x%10);
		x=x/10;
	}
	return (i);
}
 int main (){
	int x;
	printf("Informe o numero desejado\n");
	scanf("%d",&x);
	digito (x);
	if(digito (x)==x){
                   printf("Capicua!\n");
            }else{
			
                    printf("Nao e capicua\n"); 
        }
    return 0;
}
