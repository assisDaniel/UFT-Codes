#include <stdio.h>
#include <stdlib.h>

void main(){
    int vacinas[20][5][4], mes, dia, posto, soma=0, soma2, quest, q;

    for(mes=0; mes<=3; mes++){
        for(posto=0; posto<=4; posto++){
            for(dia=0; dia<=19; dia++){
                puts("Digite o numero de vacinas aplicadas: ");
                scanf("%d", &vacinas[dia][posto][mes]);
                
                soma+=vacinas[dia][posto][mes];
            }
        }
    }

    do{
        puts("Voce quer fazer um relatorio sobre o que? Digite: \n-[1]Posto \n-[2]Dia \n-[3]Mes");
        scanf("%d", &quest);
        soma2=0;

        switch(quest){

            case 1:
                puts("Informe o numero do posto que quer o relatorio: ");
                scanf("%d", &posto);
                posto--;
                for(mes=0; mes<=3; mes++){
                    for(dia=0; dia<=19; dia++){
                        soma2+=vacinas[dia][posto][mes];
                    }
                }
                printf("\nO numero total de vacinas aplicadas no posto informado foi: %d", soma2);
                break;

            case 2:
                puts("Informe o dia e o mes que quer fazer o relatorio: ");
                scanf("%d %d", &dia, &mes);
                dia--;
                mes--;
                for(posto=0; posto<=4; posto++){
                    soma2+=vacinas[dia][posto][mes];
                }
                printf("\nO numero total de vacinas aplicadas no dia e mes informados foram: %d", soma2);
                break;

            case 3:
                puts("Informe o mes que quer o relatorio sobre:");
                scanf("%d", &mes);
                mes--;
                for(dia=0; dia<=19; dia++){
                    for(posto=0; posto<=4; posto++){
                        soma2+=vacinas[dia][posto][mes];
                    }
                }
                printf("\nO numero total de vacinas aplicadas no mes informado foi: %d", soma2);
                break;
        }
        puts("------------------------------------------------------------------------------------------------\n");
        puts("Deseja fazer outro relatorio? Digite [0]sim ou [1]nao");
        scanf("%d", &quest);

    }while(quest!=1);
}