#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int idade, sexo, sexomenor, idademenor, cont;
    float salario, menor, media, soma;

    soma=0;

    puts("Informe sua idade: ");
    scanf("%d", &idade);
    puts("Informe seu sexo. Digite [0] para masculino e [1] para feminino: ");
    scanf("%d", &sexo);
    puts("Informe seu sal�rio: "); 
    scanf("%f", &menor);
    salario=menor;
    soma+=salario;
    
    cont=0;
    while(idade!=-1){
        cont++;
        puts("Informe seu sexo. Digite [0] para masculino e [1] para feminino: ");
        scanf("%d", &sexo);
        puts("Informe seu sal�rio: ");
        scanf("%f", &salario);
        soma+=salario;
        
        if(salario<menor){
            sexomenor=sexo;
            idademenor=idade;
        }
        puts("Informe sua idade: ");
        scanf("%d", &idade);
    }
    media=(float)soma/cont;

    printf("\nO n�mero total de pessoas consultadas foi: %d", cont);
    printf("\nA m�dia de salarios do grupo foi: R$%.2f", media);
    printf("\nO sexo da pessoa que tem o menor sal�rio �: %d\nOBS: [0] � masculino e [1] � feminino.", sexomenor);
}