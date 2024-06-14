//juros simples
#include <stdio.h>
float main(){
    float i,anos,vf;
    printf("qual a quantia que deseja investir ");
    scanf("%f",&i);

    printf("por quantos anos pretende pagar ");
    scanf("%f",&anos);

    vf=i+(i*0.05*anos);

    printf("o valor final e: %.f", vf);
}
