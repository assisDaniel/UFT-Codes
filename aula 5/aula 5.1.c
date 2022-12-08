#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
    int idade, cont;
	float media, soma;
  char op;
  
  cont=0;
  soma=0;
	do{
    cont++;
    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    if (idade>=18){
      printf("Maior de idade.");
      }else{
      printf("Menor de idade.");
}
    soma= soma + idade;
    media= (float)soma/cont;
    printf("\t\nContinuar? s ou n ");
    scanf(" %c", &op);
    }while (op != 'n');
  printf("\nO número de entrada de dados foi %i.", cont);
  printf("\nSua média é: %.2f", media);
}