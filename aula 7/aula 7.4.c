#include <locale.h>
#include <stdio.h>
#include <strings.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  float salreal, salario, auxescola, auxaliment;
  int filhos;
  char quest[15];

  while(strcmp(quest,"finalizar")!=0){
    printf("\nInforme o valor do seu sal�rio: ");
    scanf("%f", &salario);
    printf("\nInforme quantos filhos voc� tem: ");
    scanf("%d", &filhos);

    auxescola= 200*filhos;

    if(salario>3000){
      salario*=0.90;
    }
    else if(salario<=3000){
      salario*=0.95;
      auxaliment=150;
      if(salario<=1000){
        auxaliment=300;
      }
    }
    
    salreal= salario+auxaliment+auxescola;
    printf("\nO valor recebido foi: %.2f", salreal);

    printf("\nQuer fazer novo c�lculo ou finalizar o programa? Digite \"continuar\" ou \"finalizar\": ");
    scanf("%s", &quest);
    printf("--------------------------------------------------------------");
  }
}