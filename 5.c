//portifolio simples
#include <stdio.h>
float main(){
    float inicial,fim,cal;
    printf("quanto era o seu valor inicial? ");
    scanf("%f",&inicial);

    printf("quanto voce tem agora? ");
    scanf("%f",&fim);

    if(inicial>fim){
    cal=inicial-fim;
    printf("voce teve um prejuizo de: %.0f", cal);
    }

    else{
    printf("voce teve um lucro de: ");
    }
}
