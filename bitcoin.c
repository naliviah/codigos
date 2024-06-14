#include <stdio.h>
int main() {

  float valor,m,conta,mult,total;

  printf("informe o valor do investimento: ");
  scanf("%f", &valor);

  printf("informe a qnt de meses: ");
  scanf("%f", &m);

  total=valor+(valor*0.10*m);

  printf("voce tera no final: %f ",total);


  return 0;
}
