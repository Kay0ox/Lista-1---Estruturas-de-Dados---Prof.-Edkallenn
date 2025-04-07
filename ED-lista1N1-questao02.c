/*
**    Função : fatorial duplo
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação é
*/
 #include <stdio.h>

long long fatorial(int n){
long long resultado = 1;
 for (int i = 2; i <= n; i++){
    resultado *= i;
 }
 return resultado;
}

long long fatorial_duplo(int n){
long long resultado = 1;
for (int i = n; i> 1; i -= 2){
    resultado *= i;
}
return resultado;
}

int main(){
    const int tam = 19;
    int numeros[tam];
    long long fat[tam], fat_duplo[tam], diferenca[tam];

    for (int i = 0, n = 2; n <= 20; i++, n++){
        numeros[i] = n;
        fat[i] = fatorial(n);
        fat_duplo[i] = fatorial_duplo(n);
        diferenca[i] = fat[i] - fat_duplo[i];
    }

    printf("\n%-7s %-20s %-20s %-20s\n", "numero", "fatorial", "fatorial_duplo", "diferença");
    printf("==================================================================================\n");

    for (int i = 0; i< tam; i++){
        printf("%-7d %-20lld %-20lld %-20lld\n", numeros[i], fat[i], fat_duplo[i], diferenca[i]);
    }
    return 007;

}
