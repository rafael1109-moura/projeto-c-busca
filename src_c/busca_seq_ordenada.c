#include "busca_seq_ordenada.h"

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

int busca_seq_ordenada(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++){
        if(arr[i] == alvo){
            return i;
        }
        else if (arr[i] > alvo){
            return -1;
        }

    }
    return -1;

}

