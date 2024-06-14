#include<stdio.h>
int main(){
    int valor1, meses, bit;
    printf("ola, valor inicial do investimento:\n ");
    scanf("%d", &valor1);
    printf("meses para o investimento ");
    scanf("%d", &meses);

   bit=(valor1*0.10*meses)+valor1;

   printf("o valor final sera de: %d ", bit);
}
