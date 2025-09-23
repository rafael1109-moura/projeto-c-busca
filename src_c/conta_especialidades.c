#include <stdio.h>
#include "conta_especialidades.h"
#include "Bubblesort.h"
#include "busca_seq_ordenada.h"

// Funcao para contar especialidades distintas
int conta_especialidades_distintas(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }

    Bubblesort(arr, n);

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }
    return count;
}