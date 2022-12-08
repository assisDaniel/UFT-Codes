#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cFrete(int venda[10][3][2], int cliente, int pedidoRel);
float media(int venda[10][3][2], int cliente);

void main(){
    int venda[10][3][2], pedidos[2], tipo, pacotes, local, relatorio, cliente, pedidoRel, peso = 0, peso2 = 0, pesoT = 0, cont=0, q;

    for (int i = 0; i <= 9; i++){
        for (int j = 0; j <= 2; j++){
            for (int k = 0; k <= 1; k++){
                venda[i][j][k] = 0;
            }
        }
    }

    for (int k = 0; k <= 1; k++){
        printf("\nCliente %d\n", 1 + k);
        printf("Informe quantos pedidos quer fazer: ");
        scanf("%d", &pedidos[k]);
        while (pedidos[k] > 10 || pedidos[k] == 0){
            printf("\nERRO! Maximo de pedidos: 10.\n");
            printf("Digite novamente: ");
            scanf("%d", &pedidos[k]);
        }
    }

    for (int k = 0; k <= 1; k++){
        printf("\n------------------------------------------------------------------------------------------------------------------");
        printf("\nCliente %d\n", 1 + k);
        for (int i = 0; i < pedidos[k]; i++){
            printf("\n\nInforme o tipo do produto que deseja. Digite: \n-[1]Argamassa AC3 20kg \n-[2]Argamassa AC2 20kg \n-[3]Rejunte 5kg");
            printf("\nEscolha: ");
            scanf("%d", &tipo);
            while (tipo < 1 || tipo > 3){
                printf("\nERRO!");
                printf("\nDigite novamente: ");
                scanf("%d", &tipo);
            }
            printf("\nInforme a quantidade de pacotes: ");
            scanf("%d", &pacotes);
            printf("\nInforme o local de entrega. Digite: \n-[1]Palmas \n-[2]Porto Nacional");
            printf("\nEscolha: ");
            scanf("%d", &local);
            while (local <= 0 || local > 2){
                printf("\nERRO!");
                printf("\nDigite novamente: ");
                scanf("%d", &local);
            }

            venda[i][0][k] = tipo;
            venda[i][1][k] = pacotes;
            venda[i][2][k] = local;
        }
    }

    do{
        printf("\n\n-------------------------------------Relatorios--------------------------------------------");
        printf("\nInforme o relatorio que deseja fazer. Digite: \n-[1]Por pedido \n-[2]Por cliente \n-[3]Geral");
        printf("\nEscolha: ");
        scanf("%d", &relatorio);

        switch (relatorio){
        case 1:
            printf("\nQual cliente deseja fazer o relatorio? Digite 0 ou 1: ");
            scanf("%d", &cliente);
            printf("\nAgora informe o pedido: ");
            scanf("%d", &pedidoRel);
            pedidoRel--;
            while (venda[pedidoRel][0][cliente] == 0){
                printf("\nO cliente nao fez essa quantidade de pedidos. ");
                printf("\nDigite novamente: ");
                scanf("%d", &pedidoRel);
                pedidoRel--;
            }

            if (venda[pedidoRel][0][cliente] == 1){
                printf("\nTipo do produto: Argamassa AC3 20kg");
            }else if (venda[pedidoRel][0][cliente] == 2){
                printf("\nTipo do produto: Argamassa AC2 20kg");
            }else{
                printf("\nTipo do produto: Rejunte 5kg");
            }

            printf("\nA quantidade de pacotes do pedido informado foi: %d", venda[pedidoRel][1][cliente]);
            if (venda[pedidoRel][2][cliente] == 1){
                printf("\nLocal de Entrega: Palmas");
            }else{
                printf("\nLocal de Entrega: Porto Nacional");
            }
            cFrete(venda, cliente, pedidoRel);
            break;

        case 2:
            printf("\nQual cliente deseja fazer o relatorio? Digite 0 ou 1: ");
            scanf("%d", &cliente);
            media(venda, cliente);
            break;

        case 3:
            for (int k = 0; k <= 1; k++){
                for (int i = 0; i <= 9; i++){
                    if (venda[i][1][k] != 0){
                        if (venda[i][0][k] == 1 || venda[i][0][k] == 2){
                            peso += 20 * venda[i][1][k];
                        }
                        else{
                            peso2 += 5 * venda[i][1][k];
                        }
                    }
                }
            }
            pesoT = peso + peso2;
            printf("\nForam vendidos %dkg de material no periodo.", pesoT);

            for (int k = 0; k <= 1; k++){
                printf("\n--------------------------------------------------------------");
                printf("\nCliente %d", 1+k);
                for (int i = 0; i <= 9; i++){
                    if (venda[i][1][k] != 0){
                        if (venda[i][0][k] == 1 || venda[i][0][k] == 2){
                            peso = 20 * venda[i][1][k];
                            if (peso < 1000){
                                printf("\nO pedido numero %d teve menos de 1000kg.", 1+i);
                            }
                        }
                        else{
                            peso = 5 * venda[i][1][k];
                            if (peso < 1000){
                                printf("\nO pedido numero %d teve menos de 1000kg.", 1+i);
                            }
                        }
                    }
                }
            }
            break;
        }
        printf("\nDeseja fazer outro relatorio? Digite 0(sim) ou 1(nao): ");
        scanf("%d", &q);

    }while(q != 1);
}

int cFrete(int venda[10][3][2], int cliente, int pedidoRel){
    int peso = 0;

    if (venda[pedidoRel][0][cliente] == 1 || venda[pedidoRel][0][cliente] == 2){
        peso = 20 * venda[pedidoRel][1][cliente];
    }else{
        peso = 5 * venda[pedidoRel][1][cliente];
    }

    if (peso < 1000){
        printf("\nFrete Gratuito!");
    }else if (peso <= 2000){
        if (venda[pedidoRel][2][cliente] == 1){
            printf("\nFrete: R$100,00");
        }else{
            printf("\nFrete: R$200,00");
        }
    }else{
        int frete = 0;
        frete = 2 * venda[pedidoRel][1][cliente];
        printf("\nFrete: R$%d,00", frete);
    }
}

float media(int venda[10][3][2], int cliente){
    int pesoT = 0, peso = 0, peso2 = 0, cont = 0;
    float media = 0;

    for (int i = 0; i <= 9; i++){
        if (venda[i][1][cliente] != 0){
            cont++;
            if (venda[i][0][cliente] == 1 || venda[i][0][cliente] == 2){
                peso += 20 * venda[i][1][cliente];
            }else{
                peso2 += 5 * venda[i][1][cliente];
            }
        }
    }
    pesoT = peso + peso2;
    media = (float)pesoT / cont;
    printf("\nA media do peso dos pedidos do cliente informado foi: %.2fkg", media);
    printf("\nO numero de pedidos feito no periodo foi: %d", cont);
}
