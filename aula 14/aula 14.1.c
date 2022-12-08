#include <stdio.h>
#include <stdlib.h>

float soma(int, int);
float subt(int, int);
float mult(int, int);
float divisao(float, float);

void main(){
    int x, y, q;
    float result;
    
    puts("Informe dois numeros de dois digitos: ");
    scanf("%d %d", &x, &y);

    printf("Escolha a operação que quer fazer. Digite: \n-[1]Soma \n-[2]Subtracao \n-[3]Multiplicacao \n-[4]Divisao\n");
    scanf("%d", &q);

    switch(q){
        case 1:
            result= soma(x, y);
            printf("%.2f", result);
            break;
        
        case 2: 
            result= subt(x, y);
            printf("%.2f", result);
            break;

        case 3:
            result= mult(x, y);
            printf("%.2f", result);
            break;

        case 4:
            result= divisao(x, y);
            printf("%.2f", result);
            break;
    }
}






float soma(int x, int y){
    return(x+y);
}
float subt(int x, int y){
    return(x-y);
}
float mult(int x, int y){
    return(x*y);
}
float divisao(float x, float y){
    if (y==0) return(0);
    return(x/y);
}