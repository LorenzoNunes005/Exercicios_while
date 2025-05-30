#include <stdio.h>

int main() {
    int numero, fatorial = 1, i = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido! Digite um número positivo.\n");
        return 1;
    }

    while (i <= numero) {
        fatorial *= i;
        i++;
    }

    printf("Fatorial de %d = %d\n", numero, fatorial);

    return 0;
}
