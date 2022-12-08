#include <stdio.h>
#include <stdlib.h>

void main(){
    int idade[13], soma, cont=0, cont2=0, cont3=0;
    float media;


    for (cont=0; cont<=12; cont++){
        printf("Informe sua idade: ");
        scanf("%d", &idade[cont]);

        soma+= idade[cont];

    }

    media= (float)soma/13;

    for (cont=0; cont<=12; cont++){
        if(idade[cont]< media){
            cont2++;
        }
        if(idade[cont]< 18){
            cont3++;
        }
    }

    printf("\nA media foi: %.2f", media);
    printf("\nO numero de pessoas com idade menor que a media geral foi: %d", cont2);
    printf("\nO numero de menores de idade informados foi: %d", cont3);
    
}