#include <stdio.h>
int main(){
    int tipo,tamanho,preco,total;
    char continuar;
    do{
    printf("digite 1 para cafe exprexo, 2 para cappuccino, e 3 para latte: ");
    scanf("%d",&tipo);

    switch(tipo){
    case 1:
    preco = 3;
    break;

    case 2:
    preco = 4;
    break;

    case 3:
    preco = 5;
    break;
    }
    printf("digite 1 para P 2 para M e 3 para G: ");
    scanf("%d",&tamanho);

    switch(tamanho){
    case 1:
    total = preco*1;
    break;

    case 2:
    total = preco*2;
    break;

    case 3:
    total = preco*3;
    break;

    }

    printf("o total ficou %d \n",total);

     printf("algo mais? (s/n): ");
    scanf(" %c", &continuar);
   }while (continuar == 's' || continuar == 'S');


   printf("obrigado pela preferencia ate mais!.\n");

}


