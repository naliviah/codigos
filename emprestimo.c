#include <stdio.h>
int main() {

  float emp, taxa, prazo,i,c,vf;

  printf("qual o valor de emprestimo(de 100 a 10.000): ");
  scanf("%f", &emp);

  printf("quantos meses para o prazo de pagamento(ate 36 meses): ");
  scanf("%f", &prazo);

  taxa=0.07;
  c=emp;
  i=prazo;

  vf=emp*(1+0.07*i)/i;

  printf("o valor final do emprestimo com juros é de:%f", vf );

  return 0;

}
