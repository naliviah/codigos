#include <stdio.h>
int main() {

  float valor,parc,conta,vp,vt,c;

  printf("informe o valor da moto: ");
  scanf("%f", &valor);

  printf("informe a qnt de parcelas desejadas: ");
  scanf("%f", &parc);

  c=valor/parc;

  vt=vp*(1+0.02);

  c=vt*parc;

  printf("o valor final do consorcio e de %f", c);

  return 0;

  }
