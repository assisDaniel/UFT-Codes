#include <stdio.h>
#include <stdlib.h>

void main(){
    int id[5][13], cont=0, cont2, cont3=0, soma;
    float media;

    while(cont<=4){
        media=0;
        soma=0;

        for(cont2=0; cont2<=12; cont2++){
            printf("\nInforme sua idade: ");
            scanf("%d", &id[cont][cont2]);

            soma+= id[cont][cont2];
        }
        
        media= (float)soma/13;
        for(cont2=0; cont2<=12; cont2++){
            if(id[cont][cont2] < media){
                cont3++;
            }
        }
        printf("Media do grupo: %.2f", media);
        printf("\n-----------------------------------------------------------------------------");

        cont++;
    }

    printf("\nO numero de pessoas com idade menor que a media geral DO GRUPO: %d", cont3);
            
}