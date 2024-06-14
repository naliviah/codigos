#include<stdio.h>
int main(){
  char palavra1[80], palavra2[80];
  int tam1,tam2;

  printf("insira uma palavra: ");
  scanf("%s", &palavra1);
  printf("insira uma palavra: ");
  scanf("%s", &palavra2);


  tam1=strlen(palavra1);
  tam2=strlen(palavra2);

  if( tam1 == tam2){
    printf("possuem o mesmo numero de letras");
  }

  else{
    printf("nao posuem o mesmo numero de letras");
  }

  return 0;

  }
