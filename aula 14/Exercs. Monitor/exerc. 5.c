#include <stdio.h>
#include <stdlib.h>

void main(){
    int x, y;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &x);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &y);

    printf("O mdc de %d e %d e: %d", x, y, mdc(x, y));
    
}

int mdc(int x, int y){
    if (x%y==0){ 
        return y;
    }else{
        return mdc(y,(x%y));
    }
}