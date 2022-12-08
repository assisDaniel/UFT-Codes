#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  char sexo[30];
  float p, h, imc;
  int i;
  
  
  
  for (i=1; i<=15; i++){
    printf("\t\n Pessoa %i\n", i);
    printf("\nInforme seu sexo (F/M): ");
    scanf("%s", &sexo);
    printf("Informe seu peso em Kg: ");
    scanf("%f", &p);
    printf("Informe a sua altura em metros: ");
    scanf("%f", &h);

   imc = p/(h*h);

    if (strcmp(sexo, "masculino")==0){
      if(imc>19 && imc<=25){
        printf("Você está no peso ideal.\n");
      }
      if(imc<19 || imc>25){  
        printf("Você não está no peso ideal.\n");
      }
    }
    if (strcmp(sexo, "feminino")==0){
      if(imc>18 && imc<=24.5){
        printf("Você está no peso ideal.\n");
      }
      if(imc<18 || imc>24.5){
        printf("Você não está no peso ideal.\n");
      }
    }
    
  }

  
}