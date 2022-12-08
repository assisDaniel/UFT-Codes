#include <stdio.h>
#include <stdlib.h>

void main(){
    int num[10], cont;

    for(cont=0; cont<=9; cont++){
        printf("Informe um numero qualquer: ");
        scanf("%d", &num[cont]);
    }

    for(cont=0; cont<=9; cont++){
        printf("\nO valor do vetor[%d]: %d", cont, num[cont]);
    }
}