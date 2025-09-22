#include "recursao.h"
#include "busca_binaria.h"

// Função de busca binária recursiva
int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int chave) {
    if (inicio > fim) {
        return -1;
    }

    int meio = inicio + (fim - inicio) / 2;

    if (vetor[meio] == chave) {
        return meio;
    } else if (vetor[meio] < chave) {
        return buscaBinariaRecursiva(vetor, meio + 1, fim, chave);
    } else {
        return buscaBinariaRecursiva(vetor, inicio, meio - 1, chave);
    }
}