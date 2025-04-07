/*
**    Função :10 lembro qualé nn
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é um
*/
 #include <stdio.h>
 #include <stdlib.h>
 int permutacao_circular(int* arr1, int* arr2, int tamanho) {
    if (tamanho <= 0) return 0;

    int* concat = malloc(sizeof(int) * 2 * tamanho);
    if (concat == NULL) {
        printf("erro de alocaçao de memoria.\n");
        return 0;
    }
for (int i = 0; i < tamanho; i++) {
        concat[i] = arr1[i];
        concat[i + tamanho] = arr1[i];
    }
for (int i = 0; i < tamanho; i++) {
        int igual = 1;
        for (int j = 0; j < tamanho; j++) {
            if (concat[i + j] != arr2[j]) {
                igual = 0;
                break;
            }
        }
        if (igual) {
            free(concat);
            return 1;
        }
    }

    free(concat);
    return 0;
}
int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 1, 2};
    int tamanho = sizeof(arr1) / sizeof(arr1[0]);

    if (permutacao_circular(arr1, arr2, tamanho)) {
        printf("e permutaçao circular!\n");
    } else {
        printf("nao e permutaçao circular.\n");
    }

    return 0;
}
