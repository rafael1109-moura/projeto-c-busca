#include "busca_binaria.h"

int busca_binaria(int arr[], int n, int alvo) {

    int inicio = 0;
    int fim = n - 1;
    int meio;

    while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2; // Evita overflow

        if (arr[meio] == alvo) return meio;
        else if (arr[meio] < alvo) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1; // Não encontrado
}

