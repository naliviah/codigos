#include <stdio.h>

int main() {

  int lados;
  char continuar;

  do{

  printf("Digite o numero de lados (3,4,5,6,7): ");
  scanf("%d", &lados);

  switch (lados) {

    case 3:
        printf("triangulo e a sua forma");
      break;

    case 4:
        printf("quadrado e a sua forma");
      break;

    case 5:
        printf("pentagono e a sua forma");
      break;


    case 6:
        printf("hexagono e a sua forma");
      break;

    case 7:
        printf("heptagono e a sua forma");
      break;

    default:
        printf("quantidade de lados invalida!\n");

  }

    printf("\nDeseja ver outra forma? (s/n): ");
    scanf(" %c", &continuar);
   } while (continuar == 's' || continuar == 'S');

    printf("Programa finalizado.\n");


  return 0;

}