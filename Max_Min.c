#include <stdio.h>

int main() {
    int numero, max, min;
    int primeiro = 1;

    printf("Digite números inteiros (0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (primeiro) {
            max = min = numero;
            primeiro = 0;
        } else {
            if (numero > max) max = numero;
            if (numero < min) min = numero;
        }
    }

    if (!primeiro) {
        printf("Máximo = %d, Mínimo = %d\n", max, min);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
