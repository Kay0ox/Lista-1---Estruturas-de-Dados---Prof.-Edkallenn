/*
**    Função : Soma de Divisores Amigáveis
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é um
*/
 #include <stdio.h>

int soma_divisores_proprios(int num){
int soma = 0;
printf("divisores proprios de %d: ",num);
for (int i = 1; i< num; i++){
if (num % i == 0){
    printf("%d ", i);
    soma += i;
    }
  }
  printf("soma: %d\n", soma);
  return soma;
}

void verificar_amigaveis(int a,int b){
int soma_a = soma_divisores_proprios(a);
int soma_b = soma_divisores_proprios(b);

if (soma_a == b && soma_b == a){
    printf("\n %d e %d sao numeros amigaveis!\n\n",a,b);
    } else {
    printf("\n %d e %d NAO sao numeros amigaveis!\n\n",a,b);
    }
}
void encontrar_amigaveis_ate(int limite){
for (int i = 1; i <= limite; i++){
    int soma_i = 0;
    for(int j = 1; j < i; j++){
        if (i% j == 0)
            soma_i += j;
    }
    if (soma_i > i && soma_i <= limite){
        int soma_soma_i = 0;
        for (int j = 1; j < soma_i; j++){
            if (soma_i % j == 0)
                soma_soma_i += j;
        }
        if (soma_soma_i ==i){
            printf("par amigavel encontrado: %d e %d\n", i, soma_i);
            }
        }
    }
}

int main() {
    int n;

    printf("Digite um valor limite para procurar pares amigaveis: ");
    scanf("%d", &n);

    printf("\n Verificando pares amigaveis ate %d...\n\n", n);
    encontrar_amigaveis_ate(n);

    // Exemplo: verificar diretamente se dois números são amigáveis
    printf("\nVerificaçao direta (exemplo com 220 e 284):\n");
    verificar_amigaveis(220, 284);

    return 0;
}
