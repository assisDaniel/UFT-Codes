#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  int ladoA, ladoB, ladoC;
  char quest;

  printf("\tMonte seu tri�ngulo!");
  do{
    printf("\nInforme o valor do lado A: ");
    scanf("%d", &ladoA);
    printf("\nInforme o valor do lado B: ");
    scanf("%d", &ladoB);
    printf("\nInforme o valor do lado C: ");
    scanf("%d", &ladoC);

    if(ladoA<ladoB+ladoC && ladoB<ladoA+ladoC && ladoC<ladoA+ladoB){
      if(ladoA==ladoB && ladoA==ladoC){
      printf("\nO tri�ngulo formado � equil�tero");
      }
      else if(ladoA!=ladoB && ladoA==ladoC){
      printf("\nO tri�ngulo formado � is�sceles");
      }
      else if(ladoA!=ladoB && ladoA!= ladoC){
      printf("\nO tri�ngulo formado � escaleno");
      }
    }
    else{
      printf("\nOs valores informados n�o formam um tri�ngulo.");
    }

    printf("\n\nQuer formar outro tri�ngulo? Digite s ou n: ");
    scanf(" %c", &quest);
  }while(quest!='n');
}