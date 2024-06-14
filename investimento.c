#include <stdio.h>
int main() {

  float va,vi,c;

  printf("qual seu valor atual: ");
  scanf("%f", &va);

  printf("qual o seu valor inicial: ");
  scanf("%f", &vi);

  if(vi<va){
    c=va-vi;
    printf("voce lucrou %f", c);
  }

  else{
   c=va-vi;
   printf("voce teve um prejuizo de %f", c);
  }

  return 0;

  }
