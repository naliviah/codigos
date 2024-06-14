#include <stdio.h>

int main() {

  int quant,usu;
  char continuar;

do{

  printf("bom dia qual o seu usuario?\n");
  printf("Digite 1 para aluno\n");
  printf("Digite 2 para professor\n");
  printf("Digite 3 para pesquisador\n");
  printf("Digite 4 para visitante: ");
  scanf("%i", &usu);

  switch (usu) {

    case 1:
        printf("a quantidade de livros: ");
        scanf("%d", &quant);

            if (quant==1){
                printf("emprestimo autorizado");
            }

            else if(quant==2){

                printf("emprestimo autorizado");
            }
              else if(quant==3){

                printf("emprestimo autorizado");
            }


            else{
                printf("emprestimo negado");
            }
      break;

    case 2:
        printf("a quantidade de livros: ");
        scanf("%d", &quant);

            if (quant==1){
                printf("emprestimo autorizado");
            }

            else if(quant==2){

                printf("emprestimo autorizado");
            }
              else if(quant==3){

                printf("emprestimo autorizado");
            }

            else if(quant==4){

                printf("emprestimo autorizado");
            }

            else if(quant==5){

                printf("emprestimo autorizado");
            }


            else{
                printf("emprestimo negado");
            }
      break;

    case 3:
        printf("a quantidade de livros: ");
        scanf("%d", &quant);

            if (quant==1){
                printf("emprestimo autorizado");
            }

            else if(quant==2){

                printf("emprestimo autorizado");
            }
              else if(quant==3){

                printf("emprestimo autorizado");
            }

            else if(quant==4){

                printf("emprestimo autorizado");
            }

            else if(quant==5){

                printf("emprestimo autorizado");
            }
             else if(quant==6){

                printf("emprestimo autorizado");
            }

             else if(quant==7){

                printf("emprestimo autorizado");
            }

             else if(quant==8){

                printf("emprestimo autorizado");
            }

             else if(quant==9){

                printf("emprestimo autorizado");
            }

             else if(quant==10){

                printf("emprestimo autorizado");
            }

            else{
                printf("emprestimo negado");
            }

        break;

        case 4:
        printf("a quantidade de livros: ");
        scanf("%d", &quant);

            if (quant==1){
                printf("emprestimo autorizado");
            }

            else{
                printf("emprestimo negado");
            }

        break;

    default:
        printf("erro!\n");

  }

    printf("\nDeseja continuar emprestando? (s/n): ");
    scanf(" %c", &continuar);
   } while (continuar == 's' || continuar == 'S');

    printf("Programa finalizado.\n");



  return 0;

}
