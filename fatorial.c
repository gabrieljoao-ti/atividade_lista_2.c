#include <stdio.h>

int main() {
    int n, i;
    long fatorial = 1; 

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
       
        for (i = n; i > 1; i--) {
            fatorial = fatorial * i;
        }

        printf("O fatorial de %d e: %ld\n", n, fatorial);
    }
system("pause")
    return 0;
}
