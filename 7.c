//imposto de renda
#include <stdio.h>
int main(){
int valor, cal;
printf ("Qual o valor dos seus rendimentos anuais?: ");
scanf ("%d", &valor);

cal = valor*0.15;

printf ("Seu imposto ficou: %i", cal);

return 0;
}
