#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf(" Qual sua Altura?: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) printf("Abaixo do peso\n");
    else if (imc < 25) printf("Peso normal\n");
    else if (imc < 30) printf("Sobrepeso\n");
    else printf("Obesidade\n");

  system("pause")
    return 0;
}
