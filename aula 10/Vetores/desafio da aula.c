#include <stdio.h>
#include <stdlib.h>

void main(){
    char n[13], nmaior[13];
    int id[13], cont, maior=0;

    for(cont=0; cont<=4; cont++){
        printf("Informe seu nome: ");
        scanf("%s", &n[cont]);

        printf("Informe sua idade: ");
        scanf("%d", &id[cont]);

        if(id[cont]> maior){
            maior=id[cont];
            strcpy(n[cont], nmaior[0]);
        }
    }
    
    printf("\tOs nomes informados foram: ");
    for(cont=0; cont<=4; cont++){
        printf("\n%s", n[cont]);
    }
    printf("\t\nAs idades informadas foram: ");
    for(cont=0; cont<=4; cont++){
        printf("%d", id[cont]);
    }
    printf("\n%s foi a pessoa mais velha e tinha %d anos", nmaior[0], maior);

}