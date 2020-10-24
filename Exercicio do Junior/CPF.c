#include<stdio.h>
int main (){
	int cpf[11],vd[13],i,sr;
	printf("Digite o numero do CPF\n");
	for (i=0;i<11;i++){
	scanf("%d",&cpf[i]);
	}
	printf("| %d  | %d  | %d  | %d | %d | %d | %d | %d | %d | %d | %d | \n",cpf[0],cpf[1],cpf[2],cpf[3],cpf[4],cpf[5],cpf[6],cpf[7],cpf[8],cpf[9],cpf[10]);
	for (i=12;i>0;i--){
	vd[i]=i;
	}
	printf("| %d | %d | %d | %d | %d | %d | %d | %d | %d | %d | %d | \n",vd[12],vd[11],vd[10],vd[9],vd[8],vd[7],vd[6],vd[5],vd[4],vd[3],vd[2]);
	sr=cpf[0]*vd[12]+cpf[1]*vd[11]+cpf[2]*vd[10]+cpf[3]*vd[9]+cpf[4]*vd[8]+cpf[5]*vd[7]+cpf[6]*vd[6]+cpf[7]*vd[5]+cpf[8]*vd[4]+cpf[9]*vd[3]+cpf[10]*vd[2]+cpf[11]*vd[2];
	return 0;
}
