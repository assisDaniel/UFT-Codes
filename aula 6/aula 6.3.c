#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  float saldom, credito;
  char quest;

  do{
    printf("Informe seu saldo médio do ano passado: ");
    scanf("%f", &saldom);

    if(saldom>=0 && saldom<=500){
      printf("\nVocê não receberá nenhum crédito especial. ");
    }
    if(saldom>=501 && saldom<=1000){
      credito=saldom*0.3;
      printf("\nO valor do seu crédito é: R$ %.2f", credito);
    }
    if(saldom>=1001 && saldom<=3000){
      credito=saldom*0.4;
      printf("\nO valor do seu crédito é: R$ %.2f", credito);
    }
    if(saldom>=3001){
      credito=saldom*0.5;
      printf("\nO valor do seu crédito é: R$ %.2f", credito);
    }
    printf("\n\nQuer continuar? Digite s ou n: ");
    scanf(" %c", &quest);
  }while(quest!='n');
}