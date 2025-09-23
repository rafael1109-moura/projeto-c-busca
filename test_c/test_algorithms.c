#include <stdio.h>
#include <stdbool.h>
#include "Bubblesort.h"
#include "busca_seq_ordenada.h"
#include "recursao.h"
#include "primeira_versao_defeituosa.h"
#include "conta_especialidades.h"
#include "recursao_contagem_caracteres.h"

// A simulação da API isBadVersion deve ser colocada aqui no arquivo de teste.
// Defina qual a primeira versão defeituosa para o teste.
static int bad = 4;
bool isBadVersion(int version) {
    return version >= bad;
}

// Macro para rodar testes
#define RUN_TEST(name, expr, expected) \
    do { \
        int result = (expr); \
        printf("%-25s %s\n", name, (result == (expected)) ? "OK" : "FAIL"); \
    } while(0)

int main() {
    int arr1[] = {5, 2, 9, 1, 3, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    // Testa o Bubble Sort e a busca sequencial
    Bubblesort(arr1, n1);
    RUN_TEST("Busca sequencial (3)", busca_seq_ordenada(arr1, n1, 3), 2);
    RUN_TEST("Busca sequencial (7)", busca_seq_ordenada(arr1, n1, 7), 4);
    RUN_TEST("Busca sequencial (5)", busca_seq_ordenada(arr1, n1, 5), 3);
    RUN_TEST("Busca sequencial (10)", busca_seq_ordenada(arr1, n1, 10), -1);

    printf("\n--- Teste de Versao Defeituosa ---\n");
    // Novo teste para a atividade da versão defeituosa
    RUN_TEST("Primeira versao defeituosa", busca_versao_defeituosa(5), 4);

    printf("\n--- Teste de Especialidades Distintas ---\n");
    // Novo teste para a atividade de contar especialidades
    int arr_especialidades[] = {4, 2, 1, 4, 2, 1};
    int n_especialidades = sizeof(arr_especialidades) / sizeof(arr_especialidades[0]);
    RUN_TEST("Especialidades distintas", conta_especialidades_distintas(arr_especialidades, n_especialidades), 3);

    printf("\n--- Teste de Contagem Recursiva ---\n");
    // Novo teste para a atividade de recursão
    RUN_TEST("Contagem Recursiva ('banana', 'a')", recursao_contagem_caracteres("banana", 'a'), 3);
    RUN_TEST("Contagem Recursiva ('banana', 'b')", recursao_contagem_caracteres("banana", 'b'), 1);
    RUN_TEST("Contagem Recursiva ('banana', 'x')", recursao_contagem_caracteres("banana", 'x'), 0);

    return 0;
}
