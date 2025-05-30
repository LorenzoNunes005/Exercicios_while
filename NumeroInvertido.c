#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido.\n");
        return 1;
    }

    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10);
        numero /= 10;
    }

    printf("Número invertido: %d\n", invertido);

    return 0;
}
