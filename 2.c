//simulador de emprestimo simples
#include <stdio.h>
float main(){
    float em,meses,vf;
    printf("qual a quantia do emprestimo que voce deseja pegar?");
    scanf("%f",&em);

    if (em<100 && em>10.000){
        printf("nao autorizado");
    }
    else{
    printf("em quantos meses? ");
    scanf("%f",&meses);
    }
    vf=em*(1+0.07*meses)/meses;
    printf("o valor do seu emprestimo com a taxa fica %.2f",vf);
}
