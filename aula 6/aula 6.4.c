#include <stdio.h>
#include <locale.h>

void main(){
char nome[15], nomemaior[15];
  int idade, cont, maior, i;
  float peso, media1, media2, soma1, soma2;

  cont=0;
  soma1=0;
  soma2=0;
  
  printf("Informe seu nome, peso e idade, respectivamente: ");
  scanf("%s %f %d", &nome, &peso, &idade);
  maior=idade;
  
  while(cont<=0){
  
    cont++;
    printf("Informe seu nome, peso e idade, respectivamente: ");
    soma1+=peso;
    soma2+=idade;
    
    if(idade>maior){
      maior=idade;
      i=0;
      for(i=0; i<15; i++){
        nomemaior[i] = nome[i];
      }
    }
    scanf("%s %f %d", &nome, &peso, &idade);
  }
  printf("\n%s", nomemaior);
  printf("\n%d", maior);
  printf("\nMédia dos pesos é: %.2f", soma1/cont);
  printf("\nMédia das idades é: %.2f", soma2/cont);
  
}