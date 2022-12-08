#include <stdio.h>
#include <stdlib.h>

void maiorNum(float, float);

void main(){
    float x, y;

    printf("Escolha um numero qualquer: ");
    scanf("%f", &x);
    printf("Escolha um numero qualquer: ");
    scanf("%f", &y);

    maiorNum(x,y);
}

void maiorNum(float x, float y){
    float maior;
    if (x>y){
        maior=x;
    }else{
        maior=y;
    }
    printf("%.1f", maior);
    
}