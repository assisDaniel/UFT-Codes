#include <stdio.h>
#include <stdlib.h>

void main(){
    float freq[10][8], oxi[10][8], soma[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, media[10], maior[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int id[10], cont = 0, cont2, q1, quest;

    for (cont = 0; cont <= 1; cont++){
        puts("-----------------------------------------------------\n");
        puts("Informe sua idade: ");
        scanf("%d", &id[cont]);
        for (cont2 = 0; cont2 <= 4; cont2++){
            puts("Informe sua frequencia cardiaca da semana: ");
            scanf("%f", &freq[cont][cont2]);
            puts("Informe seu nivel de oxigenio no sangue: ");
            scanf("%f", &oxi[cont][cont2]);

            soma[cont] += oxi[cont][cont2];

            if (freq[cont][cont2] > maior[cont]){
                maior[cont] = freq[cont][cont2];
            }
        }
        media[cont] = (float)soma[cont] / 5;
    }

    do{
        puts("-----------------------------------------------------\n");
        puts("Informe o numero do atleta que quer o relatorio: ");
        scanf("%d", &q1);
        q1--;

        for (cont2 = 0; cont2 <= 4; cont2++){
            printf("\nIdade: %d", id[q1]);
            printf("\nFrequencia cardiaca na semana %d: %.2f", 1 + cont2, freq[q1][cont2]);
            printf("\nNivel de oxigenio na semana %d: %.2f", 1 + cont2, oxi[q1][cont2]);
        }

        puts("------------------------------------------------------\n");
        printf("O nivel medio de oxigenio no sangue do atleta escolhido foi: %.2f", media[q1]);

        puts("------------------------------------------------------\n");
        printf("A maior frequencia cardiaca registrada do atleta escolhido foi: %.2f", maior[q1]);

        puts("------------------------------------------------------\n");
        printf("Informe se quer fazer um relatorio de outro atleta: [0]sim ou [1]nao: ");
        scanf("%d", &quest);
    } while (quest != 1);
}