#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "aluno.h"
#include<locale.h>
struct aluno{
char nome[80];
char cpf[20];
int matricula;
} typedef Aluno;

int main(){
setlocale(LC_ALL, "Portuguese");
FILE *f;
int alunosqtd = 0;
f = fopen("alunos.txt", "r");
if(f == NULL){
	f = fopen("alunos.txt", "w");
	if(f == NULL){
	exit(1);
	}
} else{
	calculaalunos(f, &alunosqtd);
}
int opcao, i, mat;
printf("                                           BEM-VINDO!\n                           DIGITE UMA OPÇÃO VÁLIDA PARA CONTINUAR...");
while(opcao != 4){
 printf("\n\nMENU\n1 - MATRICULAR ALUNO\n2 - PROCURAR ALUNO POR MATRÍCULA\n3 - PROCURAR ALUNO PELO NOME\n4 - SAIR DO PROGRAMA\nSELECIONE SUA OPÇÃO:");
 scanf("%d", &opcao);
 switch(opcao){
 	case 1:
 	f = matriculaaluno(f, &alunosqtd);
 	fclose(f);
 	break;
 	case 2:
 	if(alunosqtd > 0){
 	f = fopen("alunos.txt", "r");//
 	 printf("\nDigite a matrícula do aluno que deseja buscar: ");
 	 scanf("%d", &mat);
 	 i = BuscaMat(criaeordenaMAT(f, alunosqtd), alunosqtd, mat);
 	 if(i == -1){
 	 	printf("NÃO EXISTE ALUNO COM ESSE NÚMERO DE MATRÍCULA!\n");
	  }
	fclose(f);
	 } else{
	 	printf("\nNENHUM ALUNO MATRICULADO!\n");
	 }
 	break;
 	case 3: 
 	if(alunosqtd > 0){
 	f = fopen("alunos.txt", "r");
 	 i = BuscaNome(criaeordenaNOME(f, alunosqtd), alunosqtd);
 	 if(i == -1){
 	 	printf("NÃO EXISTE ALUNO MATRICULADO COM ESSE NOME DE MATRÍCULA!\n");
	  }
	fclose(f);
	 } else{
	 	printf("\nNENHUM ALUNO MATRICULADO!\n");
	 }
 	break;
 	case 4:
 	printf("\nOBRIGADO POR UTILIZAR O PROGRAMA!");
 	break;
 	default:
 	printf("\nOPÇÃO INVÁLIDA!\n");
 	break;
 }
}

return 0;
}

