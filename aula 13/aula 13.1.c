#include <stdio.h>
#include <stdlib.h>

void main(){
    int vac[5][20]={{10,10,10,10,10,10}, {20,20,20,20,20,20}, {30,30,30,30,30,30}, {40,40,40,40,40,40}, {50,50,50,50,50,50}}, cont, cont2, soma=0, soma2, q1, q2, quest;

    for(cont=0; cont<=4; cont++){
        //printf("\t\nPosto %d\n", 1+cont);
        for(cont2=0; cont2<=5; cont2++){
            //printf("Quantas vacinas foram aplicadas hoje: ");
            //scanf("%d", &vac[cont][cont2]);

            soma+=vac[cont][cont2];
        }
    }
    do{
        soma2=0;
        puts("Informe o relatorio que quer. Digite: \n-[1]Posto\n-[2]Dia\n-[3]Mes");
        scanf("%d", &quest);
        
        switch (quest){
            case 1:
                puts("Informe o posto que quer saber o numero total de vacinas aplicadas: ");
                scanf("%d", &q2);
                q2--;
                for(cont2=0; cont2<=5; cont2++){
                soma2+=vac[q2][cont2];
                }
                printf("O numero total de vacinas aplicadas no posto escolhido: %d\n", soma2);
                break;
            
            case 2:
                puts("Informe o dia que quer saber o numero total de vacinas aplicadas: ");
                scanf("%d", &q1);
                q1--;
                for(cont=0; cont<=4; cont++){
                    soma2+=vac[cont][q1];
                }

                printf("O numero total de vacinas aplicadas no dia escolhido: %d\n", soma2);
                break;

            case 3:
                printf("O numero total de vacinas aplicadas no mes: %d\n", soma);
                break;

        }

        puts("Quer fazer outro relatorio? Digite [0]sim ou [1]nao: ");
        scanf("%d",&quest);
    
    }while(quest!=1);
} 
