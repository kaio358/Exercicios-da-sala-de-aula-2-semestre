#include<stdio.h>
int main (){
	int x;
	for (x=85;x<=907;x++){
		if (x%2==0){
			printf("%d e par\n",x);
		}else {
			printf("%d e impar\n",x);
		}
	}
	return 0;
}
