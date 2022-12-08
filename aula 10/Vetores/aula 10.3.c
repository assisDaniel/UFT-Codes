#include <stdio.h>
#include <stdlib.h>

void main(){
    int num[15], cont, maior=0;

    for(cont=0; cont<=14; cont++){
        printf("Informe um numero qualquer: ");
        scanf("%d", &num[cont]);

        if (num[cont]> maior){
            maior= num[cont];
        }

    }

    printf("\nO maior numero informado foi: %d", maior);
    for(cont=14; cont>=0; cont--){
        printf("\nO valor do vetor[%d] foi: %d", cont, num[cont]);
    }
}