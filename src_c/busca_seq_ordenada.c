#include "busca_seq_ordenada.h"

int busca_seq_ordenada(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++){
        if(arr[i] == alvo){
            return i;
        }
    }
    return -1;
}


