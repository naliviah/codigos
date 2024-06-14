#include <stdio.h>
int main() {

    int id,ap;
    char m, g;

    printf("qual sua idade: ");
    scanf("%d", &id);

    printf("qual seu genero(m ou f): ");
    scanf(" %c", &g);

    if(g=='m'){
        ap=65-id;

        printf("faltam %d anos para a sua aposentadoria", ap);
    }

    else{
        ap=62-id;

        printf("faltam %d anos para a sua aposentadoria", ap);
    }

    return 0;

    }

