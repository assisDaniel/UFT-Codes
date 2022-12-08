#include <stdio.h>
#include <stdlib.h>

int presenca(int, int);
float notaf(float);

void main(){
    float prova, soma, soma2=0, trab;
    int cont, aulas, pres; 

    for(cont=0; cont<=3; cont++){
        printf("\n--------------------------------------------------------------------------------");
        printf("\nNotas do %d Bimestre", 1+cont);
        puts("\nInforme a nota da prova: ");
        scanf("%f", &prova);
        while(prova>6){
            printf("\nErro! Digite novamente:");
            scanf("%f", &prova);
        }
        puts("Informe a nota do trabalho: ");
        scanf("%f", &trab); 
        while(trab>4){
            printf("\nErro! Digite novamente:");
            scanf("%f", &trab);
        }
        soma= prova + trab;
        soma2+=prova+trab;
        printf("\nNota do bimestre: %.2f", soma);
    }
    
    printf("\n--------------------------------------------------------------------------------");
    puts("\nInforme a quantidade total de aulas no semestre: ");
    scanf("%d", &aulas);
    puts("\nInforme a quantidade de aulas que voce estava presente: ");
    scanf("%d", &pres);
    
    printf("\n--------------------------------------------------------------------------------");
    presenca(aulas, pres);
    printf("\n%.2f", notaf(soma2));

}

int presenca(int aulas, int pres){
    int perc=0;
    perc= (pres*100)/aulas;

    if(perc<75){
        printf("Nao teve frequencia minima.");
    } 
    else{
        printf("\nTeve frequencia minima.");
    }
} 

float notaf(float soma2){
    printf("\nNota final: ");return(soma2/4);
    if(soma2/4 > 5 && soma2/4<7){
        printf("\nRecuperação");
    }
    else if(soma2/4 >= 7){
        printf("\nAprovado");
    }
    else if(soma2/4 <5){
        printf("\nReprovado");
    }

}
