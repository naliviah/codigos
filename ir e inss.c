#include <stdio.h>
int main() {

  float sal,ir,inss,conta;
  char continuar ;
  int op;
  do{
  printf("o que voce deseja: \n");
  printf("1-salario tirando o IR\n");
  printf("2-salario tirando o inss\n");
  printf("3-a soma dos dois\n");
  scanf("%d", &op);

  switch (op){

    case 1:

    printf("informe seu salario bruto: ");
    scanf("%f", &sal);

    if(sal== 1903.98){
      printf("voce e isento");
    }

    else if(sal>=1903.99 && sal<=2826.65 ){
       ir=sal*0.075;
       conta=sal-ir;
       printf("seu salario menos imposto e igual %f",conta);

    }

     else if(sal>=2826.66 && sal<=3751.05){
       ir=sal*0.15;
       conta=sal-ir;
       printf("seu salario menos imposto e igual %f",conta);

    }

     else if(sal>=3751.06 && sal<=4664.68){
       ir=sal*0.225;
       conta=sal-ir;
       printf("seu salario menos imposto e igual %f",conta);

    }

     else{
       ir=sal*0.275;
       conta=sal-ir;
       printf("seu salario menos imposto e igual %f",conta);

    }
     break;
     case 2:

      printf("informe seu salario bruto: ");
      scanf("%f", &sal);

    if(sal== 1100.00){
       inss=sal*0.075;
       conta=sal-inss;
       printf("seu salario menos imposto e igual %f",conta);

    }

    else if(sal>=1100.01 && sal<= 2203.48 ){
       inss=sal*0.009;
       conta=sal-inss;
       printf("seu salario menos imposto e igual %f",conta);


    }


     else if(sal>=2203.49 && sal<=3305.22){
       inss=sal*0.12;
       conta=sal-inss;
       printf("seu salario menos imposto e igual %f",conta);

    }

      else if(sal>=3305.23 && sal<=6433.57){
       inss=sal*0.14;
       conta=sal-inss;
       printf("seu salario menos imposto e igual %f",conta);
    }

      else{
       printf("erro");
      }

     break;
      case 3:

        printf("informe seu salario bruto: ");
        scanf("%f", &sal);

        printf("informe seu inss: ");
        scanf("%f", &inss);


        printf("informe seu ir: ");
        scanf("%f", &ir);

        conta=sal-(ir+inss);

        printf("seu salario e: %f", conta);
}

        printf("\nDeseja ver outra opçao? (s/n): ");
        scanf(" %c", &continuar);
        } while (continuar == 's' || continuar == 'S');





         return 0;

         }














