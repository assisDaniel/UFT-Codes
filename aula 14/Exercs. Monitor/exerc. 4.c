#include <stdio.h>
#include <stdlib.h>

void checkPrimo(int);

void main(){
    int x;

    puts("Os numeros primos de 1 ate 1000 sao:");
    for (x=1; x<=1000; x++){
        checkPrimo(x);
    }
}

void checkPrimo(int x){
    
    if((x==1) || (x==2) || (x%2==0 && x!=2) || (x%3==0 && x!=3) || (x%5==0 && x!=5) || (x%7==0 && x!=7)){}
    else{
        printf("\n%d", x);
    }    
}