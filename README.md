# Busca Binária
# Definição
A busca/pesquisa binária ou binary search é um algoritmo que implementa o paradigma Divisão e Conquista para encontrar um elemento em um vetor ordenado.

# Mecanismo de busca
Divide repetidamente pela metade a porção do vetor que deve conter o item, até reduzir as localizações possíveis a apenas uma.

![binary_search](https://user-images.githubusercontent.com/119773339/228894541-5cee9541-c321-4678-b6fc-f6252c93cc06.jpg)

# Complexidade
Na notação big-O, a complexidade da Busca Binária é a complexidade logarítmica (O(logN)).

![Untitled](https://user-images.githubusercontent.com/119773339/228895974-a9b4c894-5bce-4d98-99d8-5dbae6d23639.png)

# Representação no código
A função 'BuscarMat' recebe um vetor ordenado, a quantidade de elementos desse vetor e o item deve ser achado. Utilizando um while, implementa um mecanismo de Busca Binária, que compara as 'matrículas' das structs  e, se caso o elemento for achado nesse vetor, mostra os dados da struct encontrada e retorna 1; se não, retorna -1.

![Captura de Tela (1)](https://user-images.githubusercontent.com/119773339/228899805-a4346d26-7c8b-4e05-873c-e1e0cfbcf933.png)

A função 'BuscaNome' também implementa um mecanismo de Busca Binária só que, diferente da função citada anteriormente, recebe um vetor de strings (nomes dos alunos) já ordenado em ordem alfabética e a string que deve ser achada. A função faz uso da strcmp para realizar a busca. 

![Captura de Tela (3)](https://user-images.githubusercontent.com/119773339/229025449-d964fef2-8ca9-48c4-9610-cefd5bb47774.png)

# Referências
° https://blog.pantuza.com/artigos/busca-binaria
° https://www.youtube.com/@ccsldoimeusp4077

