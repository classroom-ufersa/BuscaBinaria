#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "aluno.h"
#include<locale.h>
#include<time.h>
struct aluno{
char nome[80];
char cpf[20];
int matricula;
} typedef Aluno;
//Aloca um struct do tipo Aluno, preenche a struct, verifica se já existe aluno matriculado com o número e matricula ou não o aluno
FILE* matriculaaluno(FILE* p, int *qtd){
setlocale(LC_ALL, "Portuguese");
 int i; 
 Aluno *a = (Aluno*) malloc(sizeof(Aluno));
   fflush(stdin);
   printf("Digite o nome desse aluno:");
    scanf("%[^\n]", &a->nome);
    fflush(stdin);
    printf("Digite o cpf desse aluno:");
    scanf("%[^\n]", &a->cpf);
    printf("Digite a matrícula desse aluno:");
    scanf("%d", &a->matricula);
    if(*qtd > 0){
    p = fopen("alunos.txt", "r");
    if(p == NULL){
    	exit(1);
	}
    i = BuscaMat(criaeordenaMAT(p, *qtd), *qtd, a->matricula);
     if(i == 1){
     	printf("\nALUNO COM ESSA MATRICULA JÁ EXISTE!\n");
	 } else{
	 	p = fopen("alunos.txt", "a");
	 	if(p == NULL){
    	exit(1);
	    }
	 	fprintf(p,"%s\n%s\t%d\t\n", strupr(a->nome), a->cpf, a->matricula);
		printf("\nALUNO MATRICULADO!\n");
		*qtd = *qtd + 1;
	 }
	} else{
		p = fopen("alunos.txt", "a");
		if(p == NULL){
    	exit(1);
	    }
		fprintf(p,"%s\n%s\t%d\t\n", strupr(a->nome), a->cpf, a->matricula);
		printf("\nALUNO MATRICULADO!\n");
		*qtd = *qtd + 1;
		
	}
 free(a);
 return p;
}
//Aloca um vetor de struct Alunos, preenche esse vetor com os dados do arquivo, ordena em ordem crescente esse vetor e retorna o vetor ordenado
Aluno* criaeordenaMAT(FILE *p, int qtd){
 int i;
 Aluno *a = (Aluno*) malloc(qtd*sizeof(Aluno));
 for(i = 0; i < qtd; i++){
 	fflush(stdin);
 	fscanf(p, "%[^\n]", a[i].nome);
 	fscanf(p, "%s\t%d", a[i].cpf, &a[i].matricula);
 	fscanf(p, "\n");
 }
 qsort(a, qtd, sizeof(Aluno), comparaMatricula);

 return a;
}
//Aloca um vetor de struct Alunos, preenche esse vetor com os dados do arquivo, ordena em ordem alfabética esse vetor e retorna o vetor ordenado
Aluno* criaeordenaNOME(FILE *p, int qtd){
int i;
 Aluno *a = (Aluno*) malloc(qtd*sizeof(Aluno));
 for(i = 0; i < qtd; i++){
 	fflush(stdin);
 	fscanf(p, "%[^\n]", a[i].nome);
 	fscanf(p, "%s\t%d", a[i].cpf, &a[i].matricula);
 	fscanf(p, "\n");
 }
 qsort(a, qtd, sizeof(Aluno), comparaNome);
 return a;
}
//Auxiliar pra qsort
int comparaMatricula(const void * a, const void * b){
	if((*(Aluno*)a).matricula == (*(Aluno*)b).matricula){
		return 0;
	} else {
		if((*(Aluno*)a).matricula < (*(Aluno*)b).matricula){
			return -1;
		} else {
			return 1;
		}
	}
}
//Auxiliar pra qsort
int comparaNome(const void * a, const void * b){
 int v = strcmp((*(Aluno*)a).nome, (*(Aluno*)b).nome);
 if(v == 0){
 	return 0;
 } else{
 	if(v < 0){
 		return -1;
	 } else{
	 	return 1;
	 }
 }
}
//Busca o aluno pelo número em um vetor ordenado
int BuscaMat(Aluno *a, int qtd, int mat){
setlocale(LC_ALL, "Portuguese");
int p = 0;
int u = qtd -1;
int m;
while(p <= u){
 m = (p + u)/2;
 if(a[m].matricula == mat){
 	printf("\nALUNO ENCONTRADO:\nNome: %s\tCPF: %s\tMatrícula: %d", a[m].nome, a[m].cpf, a[m].matricula);
 	free(a);
 	return 1;
 } else {
     if(mat < a[m].matricula){
 	
 	 u = m - 1;
     } else{
     	p = m + 1;
	 }
 	
 }
 }
 free(a);
 return -1;
}
//Busca o aluno pelo nome em um vetor ordenado
int BuscaNome(Aluno *a, int qtd){
setlocale(LC_ALL, "Portuguese");
int i;
char* nome = (char*) malloc(80*sizeof(80));
printf("\nDigite o nome do aluno que deseja buscar:");
 	gets(nome);
 	nome = strupr(nome);
char r;
//double TempExe;
clock_t begin = clock();
int p = 0;
int u = qtd -1;
int m;
while(p <= u){
m = (p + u)/2;
r = strcmp(nome, a[m].nome);
if(r == 0){
	printf("ALUNO ENCONTRADO:\n NOME: %s CPF: %s MATRÍCULA: %d NÚMERO DE CHAMADA: %d", a[m].nome, a[m].cpf, a[m].matricula, m+1);
	free(a);
	free(nome);
	return 1;
} else{
	if(r == -1){
		u = m - 1;
	} else {
		p = m + 1;
	}
}
 }
 clock_t end = clock();
 //TempExe += (double)(end - begin) / CLOCKS_PER_SEC;
 //printf("\nO tempo de execução do processo de busca, em segundos, foi: %f\n", TempExe);
 
 free(a);
 free(nome);
 return -1;
}
//calcula o número de linhas de um arquivo já existente
void calculaalunos(FILE* p, int *qtd){
int c; 
while((c = fgetc(p)) != EOF){
 if(c == '\n'){
 	*qtd = *qtd + 1;
 }
}
*qtd = *qtd/2;
}


