#include <stdio.h>

int main() {

  int cpf;
  char continuar, op, liv;
do{
  printf("bom dia o que voce procura?\n");
  printf("Digite 1 para ver livros disponiveis\n");
  printf("Digite 2 para mais informaçoes\n");
  printf("Digite 3 para cadastro\n");
  printf("digite 4 para data de devolucao: ");
  scanf("%i", &op);

  switch (op) {

    case 1:
        printf("O codigo da Vinci\n");
        printf("E assim que acaba\n");
        printf("Verity\n");

      break;


    case 2:
        printf("Biblioteca sangue bravo\n ");
        printf("Cel 16998345677\n ");
        printf("tel 33224502\n ");
        printf("Rua jardim dos encantos\n ");
        printf("De seg a sex : 8:30 as 19:30\n ");
        printf("Email: bibliotecasanguebravo.contato@gmail.com");

      break;

     case 3:
        printf("Documentos para cadastro\n ");
        printf("Documento com foto\n ");
        printf("Rg\n ");
        printf("CPF\n ");
        printf("Comprovante de residencia\n ");
        printf("telefone para contato\n");
        printf("email para atualizaçoes\n");

      break;

     case 4:
        printf("cpf:..........\n");
        printf("data para devolucao 22 de maio\n");


      break;


    default:
        printf("erro!\n");

  }


    printf("\nDeseja continuar? (s/n): ");
    scanf(" %c", &continuar);
   } while (continuar == 's' || continuar == 'S');

    printf("Programa finalizado.\n");



  return 0;


}
