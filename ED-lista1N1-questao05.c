/*
**    Função : soma dos fatoriais inversos
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é um
*/
 #include <stdio.h>

 double soma_fatoriais_inversos(int n){
    double soma = 0.0;
    double fatorial = 1.0;

    for (int i = 1; i <= n; i++){
    fatorial *= i;
    soma += 1.0 / fatorial;
 }
 return soma;
 }
int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n deve ser maior ou igual a 1.\n");
        return 1;
    }

    double resultado = soma_fatoriais_inversos(n);
    printf("Soma dos fatoriais inversos de 1 a %d = %.10lf\n", n, resultado);

    return 0;
}
