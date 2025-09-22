#include "recursao.h"


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

int recursao(int vetor[], int inicio, int fim, int chave) {
    if (inicio > fim) {
        return -1; // Caso base: chave não encontrada
    }
    int meio = (inicio + fim) / 2;
    if (vetor[meio] == chave) {
        return meio; // Caso base: chave encontrada
    }
    else if (vetor[meio] < chave) {
        return buscaBinariaRecursiva(vetor, meio + 1, fim, chave); 
    }
    else {
        return buscaBinariaRecursiva(vetor, inicio, meio - 1, chave); 
    }
}
