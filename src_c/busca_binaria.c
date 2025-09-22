#include "busca_binaria.h"

void Bubblesort(int vetor[], int n) {
    int temporario;
    for (int i = 0; i < n-1; i++) {          
        for (int j = 0; j < n-i-1; j++) {   
            if (vetor[j] > vetor[j+1]) {
                // Troca
                temporario = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temporario;
            }
        }
    }
}

int busca_binaria(int arr[], int n, int alvo) {

    int inicio = 0;
    int fim = n - 1;
    int meio;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2; // Evita overflow

        if (arr[meio] == alvo) return meio;
        else if (arr[meio] < alvo) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1; // Não encontrado
}

