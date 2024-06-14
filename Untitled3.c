#include <stdio.h>
int main (){
    int alimentos,kg,produto,opcao2;
    char continuar;
    float preco,total;
    do{

    printf("qual o alimento deseja consultar o preço? digite \n 1 batata  \n 2 cenoura  \n 3 couve  \n 4 cesta completa \n 5 para calcular sua compra \n");
    scanf("%d",&alimentos);

    switch(alimentos){
    case 1 :
        printf("o kg da batata e 10,00 reais");
        break;

    case 2 :
        printf("o kg da cenoura e 9,00 reais");
        break;

    case 3 :
        printf("o kg da couve e 16,00 reais \n");
        break;

    case 4 :
        printf("na cesta completa contem cenoura, batata, couve, e chuchu o total da cesta e 40,00 reais ");
        break;

    case 5:
        printf("oque voce comprou? \n digite \n 1 batata  \n 2 cenoura  \n 3 couve  \n 4 cesta completa \n ");
        scanf("%d",&opcao2);

    switch(opcao2){

    case 1:
        printf("o kg da batata e 10,00 reais");
        produto = 10;
        break;

    case 2 :
        printf("o kg da cenoura e 9,00 reais");
        produto = 9;
        break;

    case 3 :
        printf("o kg da couve e 16,00 reais");
        produto = 16;
        break;

    case 4 :
        printf("na cesta completa contem cenoura, batata, couve, e chuchu o total da cesta e 40,00 reais ");
        produto = 40;
        break;
    }
    printf(" \nquantos kg voce comprou? ");
    scanf("%f",&preco);

    total = produto*preco;
    printf("o preco fica: %.2f",total);
    break;
    default:
        printf("opcao invalida");

    }
    printf("\nDeseja continuar s/n \n");
    scanf(" %c", &continuar);
    }while (continuar =='s' || continuar =='S');

     printf("programa finalizado.");
}
