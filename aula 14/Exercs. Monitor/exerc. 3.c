#include <stdio.h>
#include <stdlib.h>

void media(float, float, float);

void main(){
    float n1, n2, n3;

    printf("Digite suas 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media(n1, n2, n3);
}

void media(float n1, float n2, float n3){
    float soma=0, media, maior, menor;

    soma=n1+n2+n3;
    media= soma/3;

    if(n1>n2 && n1>n3){
        maior= n1;
    }else if(n2>n1 && n2>n3){
        maior= n2;
    }else if(n3>n1 && n3>n2){
        maior= n3;
    }
    if(n1<n2 && n1<n3){
        menor= n1;
    }else if(n2<n1 && n2<n3){
        menor= n2;
    }else if(n3<n1 && n3<n2){
        menor= n3;
    }

    printf("%.2f", media); printf("\nSua maior nota foi: %.1f", maior); printf("\nSua menor nota foi: %.1f", menor);
}