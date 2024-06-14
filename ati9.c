#include <stdio.h>
float main (){
    float soma,media, notas [10] = {1,2,3,4,5,6,7,8,9,10};
    for (float i = 0; i < 11; i++ ){
            soma = soma + i;
            media = soma/10;
    }
    printf("%.2f \n", media);


}
