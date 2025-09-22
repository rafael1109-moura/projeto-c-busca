Atividade 1: Algoritmos de Busca e Ordenação
Este repositório contém as implementações dos algoritmos de busca e ordenação em C, com testes unitários para verificar o funcionamento de cada função.

Funções Implementadas
Bubblesort
Descrição: Implementação do algoritmo de ordenação Bubblesort. Essa função organiza um array de inteiros em ordem crescente, comparando pares de elementos adjacentes e trocando-os de posição se estiverem na ordem errada.

Parâmetros:

int vetor[]: O array de inteiros a ser ordenado.

int n: O número de elementos no array.

Busca Sequencial em Vetor Ordenado
Descrição: Implementação de um algoritmo de busca sequencial. A função percorre um array de inteiros, um elemento por vez, para encontrar a posição (índice) de um valor específico. A busca é otimizada para arrays já ordenados, retornando _1 se um elemento maior que o alvo for encontrado.

Parâmetros:

int arr[]: O array de inteiros onde a busca será realizada.

int n: O número de elementos no array.

int alvo: O valor inteiro que se deseja encontrar.

Retorno: Retorna o índice do elemento se ele for encontrado. Retorna _1 caso contrário.

Busca Binária
Descrição: Implementação do algoritmo de busca binária. A função busca um valor alvo em um array de inteiros ordenado dividindo o array repetidamente pela metade, até que o valor seja encontrado ou não seja mais possível continuar a busca.

Parâmetros:

int arr[]: O array de inteiros onde a busca será realizada.

int n: O número de elementos no array.

int alvo: O valor inteiro que se deseja encontrar.

Retorno: Retorna o índice do elemento se ele for encontrado. Retorna _1 caso contrário.

Como Compilar e Executar o Código
Para compilar e executar o código, utilize o Makefile fornecido no projeto. Ele automatiza o processo de compilação e execução dos testes, tornando o processo mais rápido e simples.

Instruções de Uso
Navegue até a pasta raiz do projeto (Atividade_1) no seu terminal.

cd <caminho_para_o_seu_projeto>

Execute o comando make para compilar e rodar os testes.

make test_c

Este comando irá compilar todos os arquivos .c e criar o executável, que em seguida será executado para mostrar os resultados dos testes.

Limpando o Projeto
Se precisar remover o arquivo executável (a.exe) e os arquivos objeto, use o comando:

make clean
