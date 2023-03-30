typedef struct aluno Aluno;
//função resposável por escrever struct aluno no arquivo
FILE* matriculaaluno(FILE* p, int *qtd);
//função responsável por criar um vetor do tipo Aluno, passar as informações do arquivo para o vetor e ordenar em ordem crescente pela matrícula
Aluno* criaeordenaMAT(FILE *p, int qtd);
//função responsável por buscar um aluno pela matrícula utilizando a Busca Binária
int BuscaMat(Aluno *a, int qtd, int mat);
//função responsável por criar um vetor do tipo Aluno, passar as informações do arquivo para o vetor e ordenar em ordem alfabética pelo nome
Aluno* criaeordenaNOME(FILE *p, int qtd);
//função responsável por buscar um aluno pelo nome utilizando a Busca Binária
int BuscaNome(Aluno *a, int qtd);
//função auxiliar de qsort que compara dois números de matrículas
int comparaMatricula(const void * a, const void * b);
//função auxiliar de qsort que compara dois nomes
int comparaNome(const void * a, const void * b);
//função que calcula o números de linhas de um arquivo(linha = aluno)
void calculaalunos(FILE* p, int *qtd);
