#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int hora, min, sec, cont;

    puts("Informe a hora, incluindo segundos: ");
    puts("Hora:");
    scanf("%d", &hora);
    puts("Minutos: ");
    scanf("%d", &min);
    puts("Segundos: ");
    scanf("%d", &sec);

    convTime(hora, min, sec);

}

void convTime(int hora, int min, int sec){

    printf("O numero convertido em segundos e igual a: %d", hora*3600 + min*60 + sec);
}