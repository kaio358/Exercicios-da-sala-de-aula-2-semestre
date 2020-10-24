#include<stdio.h>
typedef struct x {
	char nome [100];
	int idade, sexo; 
} estudante;
typedef struct y{
	char area [400];	
}disciplina;
typedef struct z {
	int d,m,a,quan[45];
}diario;
typedef struct w {
    int num_area [10] ;     
}curso;
estudante aluno;
estudante discente (){
	printf("|-----------------------|\n");
	printf("        Aluno \n");
	printf("|-----------------------|\n");
	printf(" Nome : ");
	scanf("%s",aluno.nome);
    Printf(" Idade : ");
    scanf("%d",&aluno.idade);
    printf("Sexo : ");
    scanf("%d",&aluno.sexo);
    return aluno;
}
void main (){
int qualle;
do {
    printf("|-----------------------|\n");
	printf ("  Sistema academico\n");
    printf("|-----------------------|\n");
	printf(" 1 Cadastrar Diciplina \n");
	printf(" 2 Cadastrar aluno no diario \n");
	printf(" 3 Cadastrar Curso \n");
	printf(" 4 Remover aluno do diario \n");
	printf(" 5 Remover disciplina do curso \n");
	printf(" 6 Alterar dados do aluno \n");
	printf(" 7 Nota do aluno\n");
	scanf("%d",&qualle);
	switch (qualle){    
	case 1 :
	printf("|----------------------------------------|\n");
	printf("          Cadastro da Disciplina\n ");
	printf("|----------------------------------------|\n");
	
	break;
	case 2 :
	printf("|----------------------------------------|\n");
	printf("                 Diario \n");
	printf("|----------------------------------------|\n");
	break;
	case 3 :
	printf("|----------------------------------------|\n");
	printf("           Cadastro de Curso \n");
	printf("|----------------------------------------|\n");
	break;
	case 4 :
	printf("|----------------------------------------|\n");
	printf("          Remover aluno no diario \n");
	printf("|----------------------------------------|\n");
	break;
	case 5 :
	printf("|----------------------------------------|\n");
	printf(" Remover disciplina do curso do aluno\n");
	printf("|----------------------------------------|\n");
	break;
	case 6 :
	printf("|----------------------------------------|\n");
	printf("            Nota do Aluno\n");
	printf("|----------------------------------------|\n");
	
}
} while ((qualle>0)&&(qualle <9));
}
