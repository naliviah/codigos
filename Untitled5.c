#include <stdio.h>
int main(){
 int menu,emprestimo,cpf,codigo,dia,total;
 char continuar;
 do{
 printf("[1] para livros disponiveis com codigo \n[2] para contato da biblioteca \n[3] para informações de acesso a biblioteca \n[4] para horario de funcionamento \n[5] para cadastro \n[6] para emprestimo \n");
 scanf("%d",&menu);
 switch(menu){
 case 1:
 printf("lista de livros disponiveis: \nVeriry-12345 \nPor lugares incriveis-15342 \nTitanic-65483 \nA paciente-09676");
 break;

 case 2:
 printf("14 996964770");
 break;

 case 3:
 printf("encontre-nos pelo site biblioteca_chamawww.com.br");
 break;

 case 4:
 printf("nosso horario de funcionamento e de segunda a sexta das 9:00 ás 17:00 e sabado das 9:00 ás 12:00");
 break;

 case 5:
 printf("voce vai precisar do email, senha e cpf para se cadastrar");

 break;

 case 6:
 printf("para pegar livro emprestado preciso do seu cpf: ");
 scanf("%d",&cpf);
 printf("o codigo do livro desejado: ");
 scanf("%d",&codigo);
 printf("e que informe o dia de hoje: ");
 scanf("%d",&dia);
 total= dia+5;
printf("certo, seu emprestimo foi feito seu prazo e para daqui 5 dias entao voce tem ate dia: %.2d",total);
printf("cpf: %d",cpf);
printf("data de devolucao: %d",total);

}
    printf("\n deseja voltar ou inicio? s/n \n");
    scanf(" %c", &continuar);
    }while (continuar =='s' || continuar =='S');

     printf("programa finalizado.");
}
