#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  int idade;
  char quest;

  do{
    printf("\nInforme a sua idade: ");
    scanf("%i", &idade);

    if(idade<16){
      printf("\nNão eleitor.");
    }
    if(idade>=18 && idade<65){
      printf("\nEleitor obrigatório.");
    }
    if(idade >=16 && idade<18 || idade>=65){
      printf("\nEleitor facultativo");
    }
    
    printf("\n\nQuer se informar da classe eleitoral de mais alguém? S ou N ");
    scanf(" %c", &quest);
  }while(quest != 'n');
}
