#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);


    if (numero <= 0) {
        printf("Número inválido! Por favor, digite um número positivo.\n");
        return 1;
    }

    while (numero >= 0) {
        printf("%d ", numero);
        numero--;
    }

    printf("\n");
    return 0;
}
