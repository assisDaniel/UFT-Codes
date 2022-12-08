#include <locale.h>
#include <stdio.h>
#include <strings.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  int senha;
  char nome[15];

  senha=1;
  printf("Informe seu nome: ");
  scanf("%s", &nome);

  do{
    printf("Nome: %s\nSenha: %i", nome, senha);
    printf("\n\nInforme seu nome: ");
    senha++;

    scanf("%s", &nome);
  }while(senha<=50 && strcmp(nome, "fim")!=0);
}
