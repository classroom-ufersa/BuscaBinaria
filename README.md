# Busca Binária
# Definição
A pesquisa ou busca binária é um algoritmo de busca em vetores que segue o paradigma de divisão e conquista. 

# Mecanismo de busca
Divide repetidamente pela metade a porção do vetor que deve conter o item, até reduzir as localizações possíveis a apenas uma.

![binary_search](https://user-images.githubusercontent.com/119773339/228894541-5cee9541-c321-4678-b6fc-f6252c93cc06.jpg)

# Complexidade
Por se tratar de um mecanismo que funciona dividindo o tamanho do vetor (n) em 2, a busca binária tem em uma complexidade logarítmica, ou seja, O(log n) na pior e na maioria dos cenários.

![Untitled](https://user-images.githubusercontent.com/119773339/228895974-a9b4c894-5bce-4d98-99d8-5dbae6d23639.png)

# Representação no código
A função 'BuscarMat' recebe um vetor ordenado, a quantidade de elementos desse vetor e o item deve ser achado. Utilizando um while, implementa um mecanismo de Busca Binária, que compara as 'matrículas' das structs  e, se caso o elemento for achado nesse vetor, mostra os dados da struct encontrada e retorna 1; se não, retorna -1.

![Captura de Tela (1)](https://user-images.githubusercontent.com/119773339/228899805-a4346d26-7c8b-4e05-873c-e1e0cfbcf933.png)

A função 'BuscaNome' também implementa um mecanismo de Busca Binária só que, diferente da função citada anteriormente, recebe um vetor de strings (nomes dos alunos) já ordenado em ordem alfabética e a string que deve ser achada. A função faz uso da strcmp para realizar a busca. 

![Captura de Tela (3)](https://user-images.githubusercontent.com/119773339/229025449-d964fef2-8ca9-48c4-9610-cefd5bb47774.png)

# Mecanismos auxiliares: qsort(Quick Sort)
Para que a Busca Binária seja realizada, por matrícula ou nome, é necessário que a array esteja ordenada da maneira correta (crescente ou ordem alfabética), para realizar tal função é chamada a função qsort, da biblioteca stdlib.h, que utiliza o mecanismo Quick Sort para ordernar os vetores. 

![Captura de Tela (6)](https://user-images.githubusercontent.com/119773339/229038098-45f586cf-583b-40f8-9d18-836e9a8ad57b.png)

![Captura de Tela (7)](https://user-images.githubusercontent.com/119773339/229038191-f7380deb-e51d-45ba-b135-8334adf4dc5e.png)

O mecanismo Quick Sort baseia a ordenação em sucessivas execuções de particionamento, uma rotina que escolhe um pivot e o posiciona no array de uma maneira em que os elementos menores ou iguais ao pivot estão à sua esquerda e os maiores estão à sua direita. A animação a seguir mostra a atuação desse algoritmo em um vetor de inteiros.

![Quicksort-example](https://user-images.githubusercontent.com/119773339/229040205-0b0418db-f439-4696-8868-44f2f099ba29.gif)
# Referências

° https://blog.pantuza.com/artigos/busca-binaria
° https://www.youtube.com/@ccsldoimeusp4077

