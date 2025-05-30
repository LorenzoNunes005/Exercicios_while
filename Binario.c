#include <stdio.h>

int main() {
    int numero, binario[32], i = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido.\n");
        return 1;
    }

    if (numero == 0) {
        printf("0\n");
        return 0;
    }

    while (numero > 0) {
        binario[i] = numero % 2;
        numero /= 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    printf("\n");
    return 0;
}
