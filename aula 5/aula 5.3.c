#include <stdio.h>

void main(){
  int cont,cont2, tabuada, num;

  cont2=1;
  do{
    cont=0;
    cont2++;
    printf("\tTabuada do %i", cont2);
    while(cont<=9){
      cont++;
      tabuada = cont*cont2;
      printf("\n%i*%i= %i",cont2, cont, tabuada);
    }
    printf("\n\n");
  }while(cont2<=9);
}
