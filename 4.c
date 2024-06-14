//aposentadoria
#include <stdio.h>
int main(){
    char genero[20];
    int idade,cal;
    printf("homem ou mulher?");
    scanf("%s",&genero);

    printf ("quantos anos voce tem? ");
    scanf("%d",&idade);

    if (stricmp(genero,"mulher")==0){
    cal=idade-62;
    printf("faltam esse tanto de anos para voce se aposentar: %d",cal );
    }
    else if (stricmp(genero,"homem")==0){
    cal=idade-65;
    printf("faltam esse tanto de anos para voce se aposentar: %d",cal );
    }
    else{
    printf("voce ja pode aposentar");
    }




}
