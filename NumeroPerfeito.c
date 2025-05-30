#include <stdio.h>

int main() {
    int numero, i, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido.\n");
        return 1;
    }

    for (i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }

    if (soma == numero) {
        printf("%d é perfeito\n", numero);
    } else {
        printf("%d não é perfeito\n", numero);
    }

    return 0;
}
