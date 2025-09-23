#include "recursao_contagem_caracteres.h"

int recursao_contagem_caracteres(const char *str, char alvo) {
    if (*str == '\0') {
        return 0;
    }

    int count = (*str == alvo) ? 1 : 0;

    return count + recursao_contagem_caracteres(str + 1, alvo);
}
