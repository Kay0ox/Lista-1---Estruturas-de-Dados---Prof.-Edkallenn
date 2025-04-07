/*
**    Função : Potências Fatoriais
**    Autor : kayooo
**    Data  : 06.04.25
**    Observações: a procrastinação
*/
 #include <stdio.h>


 int pontecia_fatorial_crescente(int x, int n){
    int resultado = 1;
    for (int i = 0; i < n; i++){
        resultado *= (x + i);
    }
    return resultado;
 }

 int potencia_fatorial_decrescente(int x, int n){
     int resultado = 1;
     for (int i =0; i < n; i++){
        resultado *= (x - i);
     }
    return resultado;
 }
  int main(){
    int x, n;

    printf("Potencia Fatorial crescente: \n");
    for (x = 2; x <= 10; x++){
        for (n =2; n <= 2; n++){
            int res = pontecia_fatorial_crescente (x, n);
            printf("x = %d, n = %d => %d crescente %d = %d\n", x,n,x,n,res);
        }
    }
     printf("Potencia Fatorial decrescente: \n");
    for (x = 2; x <= 10; x++){
        for (n =2; n <= 2; n++){
            int res = potencia_fatorial_decrescente(x, n);
            printf("x = %d, n = %d => %d decrescente %d = %d\n", x,n,x,n,res);
        }
    }

  return 007;
  }
