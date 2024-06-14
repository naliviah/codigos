#include <stdio.h>
int main(){

    int tipo,tamanho,preco,total;
    printf("Digite 1 para cafe expresso,2 para cappuccino, e 3 para latte : ");
    scanf("%d",&tipo);

    switch (tipo) {
    case 1:
    preco=3;
    break;

    case 2:
    preco=4;
    break;

    case 3:
    preco=5;
    break;

    }

    printf("Digite 1 para P ,2 para M, e 3 para G : ");
    scanf("%d",&tamanho);

    switch (tamanho){
    case 1:
    total=preco*1;
    break;

    case 2:
    total=preco*2;.
    break;

    case 3:
    total=preco*3;
    break;

    }

    printf("o total ficou: %d",total);

    }
