#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"Portuguese");
  float valor, soma;
  char x, y;
  
  do{
    soma=0;
    do{
    printf("Informe o valor da sua compra: ");
    scanf("%f", &valor);
    
    soma = soma+ valor;
    
    printf("\nQuer comprar mais algo? Digite S ou N: ");
    scanf(" %c", &x);
    
    }while(x != 'n');
  
  printf("O valor da compra é: %.2f", soma);
  printf("\n\nVocê quer iniciar um nova compra? Digite S ou N: ");
  scanf(" %c", &y);
  }while(y!='n');
  
}