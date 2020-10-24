#include<stdio.h>
int main (){
	int d1,d2,m1,m2,a1,a2;//pensei depois em fazer um procedimento, desculpa, ficou pouco bagunçado, ta com erro, mas ele compre o que deve ser feito
	printf("Informe o pelo menos 2 digitos do dia separadamente\n");
	scanf("%d",&d1);
	scanf("%d",&d2);
	printf("Informe o pelo menos 2 digitos do mes separadamente\n");
	scanf("%d",&m1);
	scanf("%d",&m2);
	printf("Informe o pelo menos 2 digitos do ano separadamente\n");
	scanf("%d",&a1);
	scanf("%d",&a2);
	if ((d1>=0)&&(d1<=3)){
	 if((d1==3)){
	  if ((d2>=0)&&(d2<=1)){
		if ((m1>=0)&&(m1<=1)){
		 if((m1==1)&&(m2<=2)&&(m2>=0)){
		  if ((a1>=0)&&(a1<=9)){
		  	if((a2>=0)&&(a2<=9)){
		     printf("%d%d%d%d%d%d\n",a1,a2,m1,m2,d1,d2);
		    }
	      }else {
	      	printf("erro1\n");
		  }
		}else{
		    if ((m2>= 0)&&(m2<=9)){
			if ((a1>=0)&&(a1<=9)){
		  	if((a2>=0)&&(a2<=9)){
		     printf("%d%d%d%d%d%d\n",a1,a2,m1,m2,d1,d2);
	    }
		}else {
			printf("erro2\n");
		}
	    }else {
	      printf("erro3\n");
		}
      }
	 }else {
	 	printf("Erro\n");
	 }
	}else {
	  printf("erro4\n");
	}
    }else {
    	if ((d1>=0)&&(d1<=2)){
    	 if ((d2>=0)&&(d2<=9)){
    	   	if ((m1>=0)&&(m1<=1)){
		     if((m1==1)&&(m2<=2)&&(m2>=0)){
		      if ((a1>=0)&&(a1<=9)){
		  	   if((a2>=0)&&(a2<=9)){
		        printf("%d%d%d%d%d%d\n",a1,a2,m1,m2,d1,d2);
		    }
		  }
	     }
	     }else{
		    if ((m2>= 0)&&(m2<=9)){
			if ((a1>=0)&&(a1<=9)){
		  	if((a2>=0)&&(a2<=9)){
		    printf("%d%d%d\n",a1,a2,m1,m2,d1,d2);
	    }
		}	
		}
	  }
     }
    }
	}
    }
	return 0;
} 
