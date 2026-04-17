#include <stdio.h>
#include <stdlib.h>

int main(void) {
int num1, num2, resto, a, b, mmc, mdc;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    a = num1;
    b = num2;
    
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    
    mdc = a;
    mmc = (num1 * num2) / mdc;
    printf("O MMC de %d e %d e: %d\n", num1, num2, mmc);
    printf("O MDC de %d e %d e: %d\n", num1, num2, mdc);
    
    system("pause");
    return 0;
}
