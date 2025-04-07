/*
**    Função : numero automorfico
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é um
*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>


int e_numero_automorfico(int n) {
    long long quadrado = (long long)n * n;

    int copia = n;
    int potencia10 = 1;

    while (copia > 0) {
        potencia10 *= 10;
        copia /= 10;
    }

    return (quadrado % potencia10) == n;
}
int main() {
    int n;
    printf("digite o valor de n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O valor deve ser maior que 2.\n");
        return 1;
    }

    int* automorficos = malloc(sizeof(int) * n);
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (e_numero_automorfico(i)) {
            automorficos[count] = i;
            count++;
        }
    }

    printf("\nnumeros automorficos entre 2 e %d:\n", n);
    for (int i = 0; i < count; i++) {
        printf("%d ", automorficos[i]);
    }

    printf("\n\ntotal: %d numeros automorficos encontrados.\n", count);

    free(automorficos);
    return 0;
}

