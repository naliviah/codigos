#include <stdio.h>
int main() {
  float juros, inves, taxa,c,i;
  int anos;

  printf("qual o seu investimento inicial: ");
  scanf("%f", &inves);

  printf("Em quantos anos: ");
  scanf("%d", &anos);

  c=inves;
  i=anos;

  juros=c+(c*0.05*i);

  printf("seu investimento futuro e de: %f ", juros);

  return 0;

  }
