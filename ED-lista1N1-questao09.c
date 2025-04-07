/*
**    Função :numeros perfeitos
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é um
*/
 #include <stdio.h>
 #include <stdbool.h>

bool eh_numero_perfeito(int n) {
    int soma = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma == n;
}
int main() {
    printf("numeros perfeitos entre 1 e 100000:\n");

    for (int i = 1; i <= 100000; i++) {
        if (eh_numero_perfeito(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


