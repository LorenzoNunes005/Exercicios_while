#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite números inteiros (0 para parar):\n");

    do {
        scanf("%d", &numero);
        soma += numero;
    } while (numero != 0);

    printf("Soma = %d\n", soma);

    return 0;
}
