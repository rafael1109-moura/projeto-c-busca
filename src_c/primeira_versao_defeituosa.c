#include "primeira_versao_defeituosa.h"

int busca_versao_defeituosa(int n) {
    int esquerda = 1;
    int direita = n;
    int primeira_defeituosa = -1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (isBadVersion(meio)) {
            primeira_defeituosa = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }
    return primeira_defeituosa;
}