#include <stdio.h>


int main() {


  char operacao;
  float n1,n2,soma,div,sub,mul;


    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf("%c", &operacao);

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


  return 0;


}
