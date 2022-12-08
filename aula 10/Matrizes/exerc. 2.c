#include <stdio.h>
#include <stdlib.h>

void main(){
    float t[3][10], media[3]={0,0,0}, acimedia[3], soma, maior=0;
    int cont=0, cont2, cont3=0, q1, q2;

    while(cont<=2){
        soma=0;
        printf("----------------------------------------------------------\n");
        for(cont2=0; cont2<=4; cont2++){
            puts("Informe sua nota final: ");
            scanf("%f", &t[cont][cont2]);

            soma+= t[cont][cont2];
        }
        
        media[cont]= (float)soma/5;
        if(media[cont]> maior){
            maior= media[cont];
        }  
        cont++;
    }

    puts("--------------------------------------------------------------------------------------");
    puts("Informe a turma e o aluno que quer saber a nota individual: ");
    scanf("%d %d", &q1, &q2);
    q1-=1;
    q2-=1;
    printf("\nNota Individual: %.2f\n", t[q1][q2]);

    puts("--------------------------------------------------------------------------------------");
    puts("Informe a turma que quer saber a media: ");
    scanf("%d", &q1);
    q1-=1;
    printf("\nA media da turma informada foi: %.2f\n", media[q1]);

    puts("--------------------------------------------------------------------------------------");
    puts("Informe o numero da turma que quer ver alunos acima da media: ");
    scanf("%d", &q1);
    q1-=1;
    for(cont2=0; cont2<=4; cont2++){
        if(t[q1][cont2]> media[q1]){
            cont3++;
        }
    }
    printf("\nO numero de alunos acima da media na turma %d foi: %d\n", q1, cont3); 
    
    puts("--------------------------------------------------------------------------------------");
    printf("\nA maior media foi: %.2f", maior);
}