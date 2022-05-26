
#include <stdlib.h>

int main(){

 int x; //base ou inteiro
 int n; //expoente
 int potencia; //guarda as potencias parciais
 int contador;

 printf("\n\tCalculo de potencia\n");

 printf("\nDigite um numero(inteiro): ");
 scanf("%d",&x);

 printf("\nDigite um numero inteiro(nao-negativo):  ");
 scanf("%d",&n);
   //inicializacoes
  potencia = 1;
  contador = 0;


   //calculo potencia
    while( contador != n){
    potencia = potencia * x;
    contador = contador + 1;

  }



  printf("\n\tO valor de %d elevado a %d e': %d\n", x, n, potencia);

  return 0;

}
