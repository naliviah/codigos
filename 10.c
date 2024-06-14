#include <stdio.h>
int main(){
float valor, paga, cal, parcela, total;
printf ("qual o valor da compra?: ");
scanf ("%f", &valor);

printf ("qual a forma de pagamento?: 1- a vista 2- parcelado ");
scanf ("%f",&paga);
if (paga==1){
    cal = valor-0.10;
    printf ("Seu total e: %f", cal);
}
else if (paga==2){
    printf ("quantas vezes ira parcelar?(2 a 5 vezes): ");
    scanf ("%f", &parcela);
    cal= parcela*0.05;
    total= cal+valor;
    printf ("O total será: %.2f", total);
}
return 0;
}
