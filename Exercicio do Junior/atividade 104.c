#include<stdio.h>
int main (){
	int x=1;
	int i;
	for (i=0;i<8;i++)
	{
	if (x==1){
	printf("  _   _  _   _   _   _   _   _ \n");
	printf("| 0 |  |   |   |   |   |   |   |\n");
    }
    if (x==2){
	printf("  _   _   _   _   _   _   _   _ \n");
	printf("| 0 | 0 |   |   |   |   |   |   |\n");
    }
    if (x==4){
	printf("  _   _   _   _   _   _   _   _ \n");
	printf("| 0 | 0 | 0 | 0 |   |   |   |   |\n");
    }
    if (x>=8){
	printf("  _   _   _   _   _   _   _   _ \n");
	printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |\n");
    }
    x=x*2;
	}
	printf(" \n");
	printf("O total de grao e de 57\n");
	return 0;
}
