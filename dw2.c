#include <stdio.h>


int main() {


  char operacao, continuar;
  float n1,n2,soma,div,sub,mul;


  do{
    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("insira um  um numero: ");
    scanf("%f", &n1);
    printf("insira um  um numero: ");
    scanf("%f", &n2);

  switch (operacao) {


    case '+':

        soma=n1+n2;
        printf("o resultado foi:%f", soma);

      break;


    case '-':

        sub=n1-n2;
        printf("o resultado foi:%f", sub);

      break;


    case '*':

        mul=n1*n2;
        printf("o resultado foi:%f ", mul);

      break;


    case '/':

        div=n1/n2;
        printf("o resultado foi:%f ", div);

      break;


    default:

    printf("Operacao invalida!\n");

  }
   printf("\nDeseja ver outra operacao? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");

  return 0;
}


