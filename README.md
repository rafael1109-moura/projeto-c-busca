Estrutura de Dados Básica (EDB1) - Atividade 1
Este projeto, desenvolvido para a disciplina de Estrutura de Dados Básica (EDB1), contém a implementação e testes de diversos algoritmos em C. O objetivo é demonstrar a aplicação prática de conceitos como busca, ordenação e recursão.

Estrutura do Projeto
O projeto é organizado da seguinte forma:

include_c/: Contém os arquivos de cabeçalho (.h) das funções.

src_c/: Contém a implementação (.c) das funções.

test_c/: Contém o arquivo test_algorithms.c com os testes unitários para cada algoritmo.

Makefile: Ferramenta utilizada para automatizar a compilação e a execução dos testes.

Algoritmos Implementados
Os seguintes algoritmos estão presentes neste projeto:

Bubblesort: Um algoritmo de ordenação simples que repete a passagem pela lista, comparando cada par de elementos adjacentes e trocando-os se estiverem na ordem errada.

Busca Sequencial Ordenada: Algoritmo de busca para listas ordenadas que percorre a lista até encontrar o elemento desejado ou um elemento maior que ele, indicando que o valor não está presente na lista.

Busca Binária Recursiva: Uma busca eficiente para listas ordenadas, que divide o espaço de busca pela metade em cada passo, reduzindo drasticamente o tempo de busca.

Primeira Versão Defeituosa: Implementação de busca binária para encontrar a primeira versão com defeito em uma lista de versões.

Contagem de Especialidades: Uma função que conta o número de especialidades distintas em uma lista de strings.

Contagem de Caracteres Recursiva: Uma função recursiva para contar a ocorrência de um caractere específico em uma string.

Como Compilar e Executar
Para compilar o projeto e executar todos os testes, use o Makefile com o seguinte comando no terminal:

& "C:\MinGW\bin\mingw32-make.exe" test_c

Para limpar o executável e outros arquivos gerados, use:

make clean

