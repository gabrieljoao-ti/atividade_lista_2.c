#include <stdio.h>

int main() {
    int n, i;
    int fatorial = 1; 

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial = fatorial * i;
        }

        printf("O fatorial de %d e %d\n", n, fatorial);
    }
    system("pause");
    return 0;
}
