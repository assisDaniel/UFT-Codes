#include <locale.h>
#include <stdio.h>
#include <strings.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  float valor, nvalor;
  char quest;

  while(quest!='n'){
    printf("\nInforme o valor do produto: ");
    scanf("%f", &valor);

    if(valor<=50){
      nvalor= valor*1.1;
      printf("\nO valor novo do seu produto � %.2f", nvalor);
    }
    else if(valor>50 && valor<=500){
      nvalor= valor*1.2;
      printf("\nO valor novo do seu produto � %.2f", nvalor);
    }
    else{
      nvalor= valor*1.3;
      printf("\nO valor novo do seu produto � %.2f", nvalor);
    }
    
    
    if(valor<=80){
      printf("\nA classifica��o do seu produto era: Barato");
    }
    else if(valor>80 && valor<=600){
      printf("\nA classifica��o do seu produto era: Normal");
    }
    else if(valor>600 && valor<=800){
      printf("\nA classifica��o do seu produto era: Caro");
    }
    else{
      printf("\nA classifica��o do seu produto era: Muito caro");
    }

    
    if(nvalor<=80){
      printf("\nA classifica��o do seu \"novo produto\" �: Barato");
    }
    else if(nvalor>80 && nvalor<=600){
      printf("\nA classifica��o do seu \"novo produto\" �: Normal");
    }
    else if(nvalor>600 && nvalor<=800){
      printf("\nA classifica��o do seu \"novo produto\" �: Caro");   
    }
    else{
      printf("\nA classifica��o do seu \"novo produto\" �: Muito caro");
    }

    printf("\n\nQuer continuar? Digite s ou n: ");
    scanf(" %c", &quest);
  }
}