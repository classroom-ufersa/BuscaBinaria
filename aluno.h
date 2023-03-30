typedef struct aluno Aluno;
//fun��o respos�vel por escrever struct aluno no arquivo
FILE* matriculaaluno(FILE* p, int *qtd);
//fun��o respons�vel por criar um vetor do tipo Aluno, passar as informa��es do arquivo para o vetor e ordenar em ordem crescente pela matr�cula
Aluno* criaeordenaMAT(FILE *p, int qtd);
//fun��o respons�vel por buscar um aluno pela matr�cula utilizando a Busca Bin�ria
int BuscaMat(Aluno *a, int qtd, int mat);
//fun��o respons�vel por criar um vetor do tipo Aluno, passar as informa��es do arquivo para o vetor e ordenar em ordem alfab�tica pelo nome
Aluno* criaeordenaNOME(FILE *p, int qtd);
//fun��o respons�vel por buscar um aluno pelo nome utilizando a Busca Bin�ria
int BuscaNome(Aluno *a, int qtd);
//fun��o auxiliar de qsort que compara dois n�meros de matr�culas
int comparaMatricula(const void * a, const void * b);
//fun��o auxiliar de qsort que compara dois nomes
int comparaNome(const void * a, const void * b);
//fun��o que calcula o n�meros de linhas de um arquivo(linha = aluno)
void calculaalunos(FILE* p, int *qtd);
