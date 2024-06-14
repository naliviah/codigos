//conversor de moedas
#include <stdio.h>
float main(){
    float moeda,dolar,real,total;

    printf("digite 1 para converter dolar e 2 para converter reais");
    scanf("%f",&moeda);


    if(moeda==1){

    printf("quantos dolares voce quer converter em reais? ");
    scanf("%f",&real);

    total=real/5.25;

    printf("seu valor convertido para reais fica: %f", total);
    }

    else if(moeda==2){

    printf("quantos reais voce quer converter em dolar? ");
    scanf("%f",&dolar);

    total=dolar*5.25;

    printf("seu valor convertido para dolar fica: %f", total);
    }

    else{
        printf("nao temos essa opcao");
    }
}
