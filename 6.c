//salario liquido
#include <stdio.h>
float main(){
    float liquido,bruto,cal,inss,cal2;
    printf("qual seu salario bruto?");
    scanf("%f",&bruto);

    //impostos
    if(bruto<1903.98){
    printf("sem impostos");
    }
    else if(bruto>1903.99 && bruto<2826.65){
    cal=bruto-(bruto * 0.075);

    }
    else if(bruto>2826.66 && bruto<3751.05){
    cal=bruto-(bruto*0.15);

    }
    else if(bruto>3751.06 && bruto<4664.68){
    cal=bruto-(bruto*0.225);

    }
    else if(bruto<=4664.68){
    cal=bruto-(bruto*0.275);


    }
    //inss
    else if (bruto>1100.00){
    inss= bruto*0.075;

    }
    else if (bruto>1100.01 && bruto<2203.48){
    inss= bruto*0.09;

    }
     else if (bruto>2203.49 && bruto<3305.22 ){
    inss= bruto*0.012;

    }
    else if (bruto>3305.23 && bruto<6433.57 ){
    inss= bruto*0.014;
    }

    cal2=bruto - (cal+inss);
    printf("seu salario liquido atual é: %.2f \n", cal2);

    printf(" O salario eh: %f", cal2);
}
