#include <stdio.h>
#include "Bubblesort.h"
#include "busca_seq_ordenada.h"
#include "busca_binaria.h"
#include "recursao.h"

#define RUN_TEST(name, expr, expected) \
    do { \
        int result = (expr); \
        printf("%-25s %s\n", name, (result == (expected)) ? "OK" : "FAIL"); \
    } while(0)

int main() {
    int arr1[] = {5, 2, 9, 1, 3, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    // Ordena antes de testar busca
    Bubblesort(arr1, n1);

    // Teste busca binária
    RUN_TEST("Busca binaria (3)", busca_binaria(arr1, n1, 3), 2);
    RUN_TEST("Busca binaria (7)", busca_binaria(arr1, n1, 7), 4);
    RUN_TEST("Busca binaria (5)", busca_binaria(arr1, n1, 5), 3);
    RUN_TEST("Busca binaria (10)", busca_binaria(arr1, n1, 10), -1);

    // Teste busca sequencial em vetor ordenado
    RUN_TEST("Busca sequencial (3)", busca_seq_ordenada(arr1, n1, 3), 2);
    RUN_TEST("Busca sequencial (7)", busca_seq_ordenada(arr1, n1, 7), 4);
    RUN_TEST("Busca sequencial (5)", busca_seq_ordenada(arr1, n1, 5), 3);
    RUN_TEST("Busca sequencial (10)", busca_seq_ordenada(arr1, n1, 10), -1);
    return 0;
}
