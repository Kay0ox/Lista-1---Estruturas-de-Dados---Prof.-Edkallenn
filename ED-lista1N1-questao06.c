/*
**    Função :numeros felizes
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é um
*/
 #include <stdio.h>
 #include <stdbool.h>

 #define MAX_VISITADOS 1000

int soma_quadrados_digitos(int n) {
    int soma = 0;
    while (n > 0) {
        int digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }
    return soma;
}


bool eh_numero_feliz(int n) {
    int visitados[MAX_VISITADOS] = {0};
    while (n != 1) {
        if (visitados[n]) {
            return false;
        }
        visitados[n] = 1;
        n = soma_quadrados_digitos(n);
    }

    return true;
}

 int main(){
    int n;
    printf("digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n<= 0){
        printf("numero invalido! deve ser positivo\n");
        return 1;
    }
    if (eh_numero_feliz(n)){
        printf("%d e um numero feliz! \n", n);
    } else{
        printf("%d e um numero infeliz \n",n);
    }
    return 0;
 }
