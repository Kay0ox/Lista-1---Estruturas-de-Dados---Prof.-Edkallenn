/*
**    Função :numeros armstrong
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é um
*/
 #include <stdio.h>
 #include <stdbool.h>
 #include <math.h>

 bool eh_numero_armstrong(int n) {
    int original = n;
    int soma = 0;

    while (n > 0) {
        int digito = n % 10;
        soma += digito * digito * digito;
        n /= 10;
    }

    return soma == original;
}
int main() {
    printf("numeros de armstrong entre 1 e 100:\n");

    for (int i = 1; i <= 100; i++) {
        if (eh_numero_armstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


