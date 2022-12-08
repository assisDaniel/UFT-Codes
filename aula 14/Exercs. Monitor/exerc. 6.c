#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raizes(int, int, int);

void main(){
    int a, b, c;

    puts("Informe 3 numeros qualquer: ");
    scanf("%d %d %d", &a, &b, &c);

    raizes(a, b, c);
}

float raizes(int a, int b, int c){
    float x1, x2;

    x1= (float)(-b + sqrt((pow(b,2)) - 4*a*c))/2*a;
    x2= (float)(-b - sqrt((pow(b,2)) - 4*a*c))/2*a;

    printf("As raizes utilizando bhaskara dos numeros informados foram: %.1f \n%.1f" ,x1, x2 );
    
}