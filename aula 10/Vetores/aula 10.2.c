#include <stdio.h>
#include <stdlib.h>

void main(){
    float k, soma[20], valor[20];
    int cont=0;

    printf("Informe um valor pra constante: ");
    scanf("%f", &k);

    for(cont=0; cont<=19; cont++){
        soma[cont]=0;
    }

    for (cont=0; cont<=19; cont++){
        printf("Informe um valor real qualquer: ");
        scanf("%f", &valor[cont]);

        soma[cont]= valor[cont] + k;
    }

    for (cont=0; cont<=19; cont++){
        printf("\nO valor da soma do vetor[%d] foi: %.2f", cont, soma[cont]);
    }
}