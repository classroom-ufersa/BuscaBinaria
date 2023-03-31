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

# Passo a passo para a execução do código utilizando o Dev-C++
1 - Abra o Dev-c++

2 - Vá em 'Arquivo' -> 'Novo' -> 'Projeto...'
![2](https://user-images.githubusercontent.com/119773339/229207352-b00a03f5-c46c-49c3-a2e1-e06d35774988.png)

3 - Selecione 'Console Application', marque a caixinha 'Projeto em C', dê um nome para o projeto e, em seguida, clique em 'Ok'
![3](https://user-images.githubusercontent.com/119773339/229207657-f5e290c7-cbb5-4fd2-96aa-92ab4f8f86d4.png)

4 - Crie uma nova pasta e salve seu projeto nela
![4 1](https://user-images.githubusercontent.com/119773339/229207752-c8459be5-692a-4725-b1db-a22caba877c8.png)
![4 2](https://user-images.githubusercontent.com/119773339/229207800-9b86343f-d562-4ec7-97d2-37d998dae4d9.png)

5 - Após a criação do projeto exclua o arquivo 'main.c'
![5](https://user-images.githubusercontent.com/119773339/229207956-b918e833-209e-4b5f-bc84-bf54b2a5ec29.png)

6 - Em seguida, adicione os três arquivos do nosso código (main.c, aluno. c e aluno.h) ao projeto
![6 1](https://user-images.githubusercontent.com/119773339/229208061-49f2c832-4740-4483-a3e3-611809089afb.png)
![6 2](https://user-images.githubusercontent.com/119773339/229208096-2047322a-1e49-4ccc-8393-ee2ccccf2968.png)


7 - No arquivo 'main.c', clique em 'Executar' e depois 'Compilar e Exexutar'
![7](https://user-images.githubusercontent.com/119773339/229208176-f281a233-24f1-4fdf-95d2-13d3e5dde3c3.png)
# Referências

° https://blog.pantuza.com/artigos/busca-binaria
° https://www.youtube.com/@ccsldoimeusp4077

