//consorcio de moto
#include<stdio.h>
float main(){
    float vm, parcelas, valor;
    printf("valor total da moto:\n ");
    scanf("%f", &vm);
    printf("parcelas desejadas ");
    scanf("%f", &parcelas);

   valor=(vm/parcelas)*0.15;

   printf("o valor de cada parcela sera de: %f ", valor);
}
