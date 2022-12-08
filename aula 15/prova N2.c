#include <stdio.h>
#include <stdlib.h>

float media( int venda[10][3][2], int cliente);
int cFrete(int venda[10][3][2], int pedidosRel, int cliente);

void main(){
    int venda[10][3][2], pedidos[2], pedidosRel, tipo, pacotes, local, relatorio, cliente, peso=0, peso2=0, pesoT=0, cont=0, q;

    for(int i=0; i<=9; i++){
        for(int j=0; j<=2; j++){
            for(int k=0; k<=1; k++){
                venda[i][j][k]=0;
            }
        }
    }

    for(int i=0; i<=1; i++){
        printf("\t\nCliente %d\n", 1+i);
        puts("Informe a quantidade de pedidos: ");
        scanf("%d", &pedidos[i]);
        while(pedidos[i]>10 || pedidos[i] == 0){
            printf("\nERRO!");
            puts("Informe a quantidade de pedidos: ");
            scanf("%d", &pedidos[i]);
        }
    }
    puts("--------------------------------------------------------------------------------\n");
    for(int k=0; k<=1; k++){
        printf("\t\nCliente %d\n", 1+k);
        for (int i=0; i<pedidos[k]; i++){
            printf("Informe o tipo do do produto. Digite: \n-[0]Argamassa AC3 20kg \n-[1]Argamassa AC2 20kg \n-[2]Rejunte 5kg\n");
            scanf("%d", &tipo);
            printf("\nInforme a quantidade de pacotes: ");
            scanf("%d", &pacotes);
            printf("\nInforme o local de entrega. Digite: \n-[0]Palmas \n-[1]Porto Nacional");
            scanf("%d", &local);
            puts("--------------------------------------------------------------------------------\n");

            venda[i][0][k]=tipo;
            venda[i][1][k]=pacotes;
            venda[i][2][k]=local;

        }
    }
    do{
        printf("\nInforme o relatorio que quer fazer. Digite: \n-[1]Por pedido \n-[2]Por cliente \n-[3]Geral");
        scanf("%d", &relatorio);

        switch (relatorio){
            case 1:
                puts("Informe o cliente de que quer relatorio. 0 ou 1? ");
                scanf("%d", &cliente);
                puts("Informe o numero do pedido: ");
                scanf("%d", &pedidosRel);
                pedidosRel--;
                
                if(venda[pedidosRel][0][cliente]==0){
                    printf("\nO tipo do pedido foi: Argamassa AC3 20kg");
                }
                else if(venda[pedidosRel][0][cliente]==1){
                    printf("\nO tipo do pedido foi: Argamassa AC2 20kg");
                }else{
                    printf("\nO tipo do pedido foi: Rejunte 5kg");
                }

                printf("\nA quantidade de pacotes do pedido informado foi: %d", venda[pedidosRel][1][cliente]);

                if(venda[pedidosRel][2][cliente]==0){
                    printf("\nO local de entrega foi: Palmas");
                }else{
                    printf("\nO local de entrega foi: Porto Nacional");
                }

                cFrete(venda,pedidosRel, cliente);
                break;
            
            case 2:
                printf("Informe o cliente para o relatorio. 0 ou 1?");
                scanf("%d", &cliente);
                media(venda, cliente);
                break;
            
            case 3:
                for(int k=0;k<=1;k++){
                    for(int i=0; i<=9; i++){
                        if(venda[i][0][k]==0 || venda[i][0][k]==1){
                            if(venda[i][1][k]!=0){
                                peso+=20*venda[i][1][k];
                                if(peso<1000){
                                    cont++;
                                }
                            }
                        }
                        else if(venda[i][0][k]==2){
                            if(venda[i][1][k]!=0){
                                peso2+=5*venda[i][1][k];
                                if(peso<1000){
                                    cont++;
                                }
                            }
                        }
                        
                    }
                }
                pesoT=peso+peso2;
                printf("\nO peso total de materiais vendidos no periodo foi: %dkg", pesoT);
                printf("\nA quantidade de pedidos que pesaram menos de 1000kg foram: %d", cont);
                break;
            }
            printf("\nQuer fazer outro relatorio? Digite [0]nao ou [1]sim: ");
            scanf("%d", &q);
    }while(q!=0);
}

int cFrete(int venda[10][3][2], int pedidosRel, int cliente){
    int peso;

    if(venda[pedidosRel][0][cliente]==0 || venda[pedidosRel][0][cliente]==1){
        peso=20*venda[pedidosRel][1][cliente];
    }
    else if(venda[pedidosRel][0][cliente]==2){
        peso=5*venda[pedidosRel][1][cliente];
    }

    if(peso<1000){
        printf("\nFrete gratuito!");
    }
    else if(peso<=2000){
        if(venda[pedidosRel][2][cliente]==0){
            printf("\nFrete: R$100,00");
        }else{
            printf("\nFrete: R$ 200,00");
        }
    }
    else{
        printf("\nFrete: R$ 2,00");
    }
}
///////////////////////////////////////////////////////////////////////////////////////
float media( int venda[10][3][2], int cliente){
    int cont=0;
    float media=0, peso=0, peso2=0, pesoT=0;;

    for(int i=0; i<=9; i++){
        if(venda[i][0][cliente]==0 || venda[i][0][cliente]==1){
            if(venda[i][1][cliente]!=0){
                peso+=20*venda[i][1][cliente];
            }
        }
        else if(venda[i][0][cliente]==2){
            if(venda[i][1][cliente]!=0){
                peso2+=5*venda[i][1][cliente];
            }
        }
        if(venda[i][1][cliente]!=0){
            cont++;
        }
    }
    pesoT=peso+peso2;
    media=(float)pesoT/cont;
    printf("\nO peso medio dos pedidos do cliente informado foi: %.2f", media);
    printf("\nO numero de pedidos feitos foram: %d", cont);
}
