#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void orderNum(char num[]);

void main(){
    char num[50], vet[50];
    int x, cont=0;

    for(x=0; x<=49; x++){
        num[x]=0;
    }

    printf("Informe um numero: ");
    fgets(num, 50, stdin);


    for(x=49; x>=0; x--){
        vet[cont] = num[x];
        cont++;
    }

    orderNum(vet);
}

void orderNum(char num[]){
    int x;
    for (x=0; x<=49; x++){
         printf("%c", num[x]);
    }

}