#include "Bubblesort.h"

// Função de ordenação Bubblesort.
void Bubblesort(int vetor[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j+1]) {
                // Troca os elementos
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}