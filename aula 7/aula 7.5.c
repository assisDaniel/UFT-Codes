#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int idade, sexo, cont, cont2, soma, soma2, soma3, soma4, soma5, soma6;
    float colest, vitc, media, media2;

    cont=0;
    soma=0;
    soma3=0;
    soma5=0;
    soma6=0;
    

    while(cont<=0){
        cont++;
        printf("\nInforme sua idade: ");
        scanf("%d", &idade);
        printf("\nInforme seu sexo. Digite 0(masculino) ou 1(feminino): ");
        scanf("%d", &sexo);
       
        if(idade<25){
            soma++;
        }

        cont2=0;
        soma2=0;
        soma4=0;
        while(cont2<=11){
            cont2++;
            printf("\n\t\tMês %d", cont2);
            printf("\nInforme o nível de colesterol: ");
            scanf("%f", &colest);
            printf("\nInforme o nível de vitamina C: ");
            scanf("%f", &vitc);
            
            soma2+=colest;
            soma4+=vitc;
        }
        media=(float)soma2/12;
        media2=(float)soma4/12;
            
        if(media>=40 && media<=100){
            soma3++;
        }
        if(sexo==1 && media2>4){
            soma5++;
        }
        if(sexo==0 && soma4>36){
            soma6++;            
        }
    }
    printf("=====================================================");
    printf("\n\t\tRESULTADOS");
    printf("\n\"%d\" pacientes tem menos de 25 anos.", soma);
    printf("\n\"%d\" pacientes tiveram sua média de colesterol entre 40 e 100.", soma3);
    printf("\n\"%d\" mulheres tiveram a média do seu nível de vitamina C acima de 4.", soma5);
    printf("\n\"%d\" homens tiveram todas a suas medidas de nível de vitamina C acima de 3.", soma6);
}