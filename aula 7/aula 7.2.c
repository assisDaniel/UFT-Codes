#include <locale.h>
#include <stdio.h>
#include <strings.h>

void main(){
  setlocale(LC_ALL, "Portuguse");
  int pessoas,dias;
  float estadia, passagem, translado, distancia, soma, desconto;
  char quest;

  translado=60;

  while (quest!='n'){
    soma=0;
    estadia=0;
    passagem=0;
    desconto=0;
  
    
    printf("\nInforme quantas pessoas tem o grupo: ");
    scanf("%d", &pessoas);
    printf("\nInforme a quantidade de dias de viagem: ");
    scanf("%d", &dias);
    printf("\nInforme a dist�ncia da viagem em milhas: ");
    scanf("%f", &distancia);

    estadia=(float)(dias*100)*pessoas;
    passagem=(float)distancia*50;
    
    soma=estadia+passagem+translado;
    

    if(pessoas>=4 && pessoas<=9){
      desconto=soma*0.95;
      printf("\nO valor do pacote com desconto �: R$ %.2f", desconto);
    }
    else if(pessoas>=10){
      desconto=soma*0.9;
      printf("\nO valor do pacote com desconto �: R$ %.2f", desconto);
    }
    else{
      printf("\nSeu grupo n�o tem desconto e o valor do pacote �: R$ %.2f", soma);
    }
    printf("\nQuer fazer outro or�amento? Digite s ou n: ");
    scanf(" %c", &quest);
  }
}