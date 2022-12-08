#include <stdio.h>
#include <stdlib.h>

void signalChecker(int);

void main(){
    int num;


    printf("Digite um numero inteiro qualquer; ");
    scanf("%d", &num);

    signalChecker(num);
}

void signalChecker (int num){
    if(num<0){
        printf("O numero informado e negativo");
    }else{
        printf("O numero informado e positivo");
    }
}