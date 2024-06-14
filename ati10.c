#include <stdio.h>
float main (){
    float soma=0,media, temperatura [7] = {27.5,28,29.7,31.7,25.3,19,16.3};
    for (int i = 0; i < 7; i++ ){
        soma = soma + temperatura[i];

    }
    media = soma/7;
    printf("%.2f \n", media);


}
