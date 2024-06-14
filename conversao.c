#include <stdio.h>
int main() {

float c, reais,tx, vf;

printf("qual valor voce gostaria de converter: ");
scanf("%f", &reais);

tx=0.20;

c=reais*0.20;

vf=c-tx;

printf("o valor em dolares e igual %f", vf);

return 0;

}
