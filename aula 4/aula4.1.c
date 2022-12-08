#include <stdio.h>
#include <locale.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  int x, idade;
  float media;
  media=0;
  for (x = 1; x<=3; x+=1){
    printf("\nInforme a sua idade: ");
    scanf("%i", &idade);
    media= media + idade;
    }
  printf("Sua média é %.2f: ", media/3);
  }
