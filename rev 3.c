#include <stdio.h>

int main() {

  int p,m,g;
  char  cafe,tam;

  printf("bom dia qual cafe voce deseja?\n");
  printf("Digite 1 para expresso\n");
  printf("Digite 2 para capuccino\n");
  printf("Digite 3 para latte: ");
  scanf("%i", &cafe);

  switch (cafe) {

    case 1:
        printf("informe o tamanho(p,m,g): ");
        scanf("%s", &tam);

            if (tam=='p'){
                p=1*3;
                printf("%d reis",p);
            }

            else if(tam=='m'){
                m=2*3;
                printf("%d reais",m);
            }

            else{
                g=3*3;
                printf("%d reais",g);
            }
      break;

    case 2:
      printf("informe o tamanho(p,m,g): ");
      scanf("%s", &tam);

            if (tam=='p'){
                p=1*4;
                printf("%d reis",p);
            }

            else if(tam=='m'){
                m=2*4;
                printf("%d reais",m);
            }

            else{
                g=3*4;
                printf("%d reais",g);
            }
      break;

    case 3:
        printf("informe o tamanho(p,m,g): ");
        scanf("%s", &tam);

            if (tam=='p'){
                p=1*5;
                printf("%d reis",p);
            }

            else if(tam=='m'){
                m=2*5;
                printf("%d reais",m);
            }

            else{
                g=3*5;
                printf("%d reais",g);
            }
      break;


    default:
        printf("erro!\n");

  }

  return 0;

}
