#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  int ladoA, ladoB, ladoC;
  char quest;

  printf("\tMonte seu triângulo!");
  do{
    printf("\nInforme o valor do lado A: ");
    scanf("%d", &ladoA);
    printf("\nInforme o valor do lado B: ");
    scanf("%d", &ladoB);
    printf("\nInforme o valor do lado C: ");
    scanf("%d", &ladoC);

    if(ladoA<ladoB+ladoC && ladoB<ladoA+ladoC && ladoC<ladoA+ladoB){
      if(ladoA==ladoB && ladoA==ladoC){
      printf("\nO triângulo formado é equilátero");
      }
      else if(ladoA!=ladoB && ladoA==ladoC){
      printf("\nO triângulo formado é isósceles");
      }
      else if(ladoA!=ladoB && ladoA!= ladoC){
      printf("\nO triângulo formado é escaleno");
      }
    }
    else{
      printf("\nOs valores informados não formam um triângulo.");
    }

    printf("\n\nQuer formar outro triângulo? Digite s ou n: ");
    scanf(" %c", &quest);
  }while(quest!='n');
}