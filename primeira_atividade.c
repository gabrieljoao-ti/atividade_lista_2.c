#include <stdio.h>
#include <stdlib.h>

int main(void) {
int h, m, s;
    printf("digite o valor em segundos:");
    scanf("%d" , &s);
    h = s/3600;
    m = (s%3600)/60;
    s = (s%3600)%60;

    printf("o valor em horas e %d, em minutos e %d e em segundos e %d", h, m, s);
    printf("\n");

    system("pause");
    return 0;
}
