#include <stdio.h>

int main() {
    int numero;
    int digito, pares = 0, impares = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    if (numero == 0) {
        pares = 1;
    }

    while (numero > 0) {
        digito = numero % 10; 

        if (digito % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        numero /= 10; 
    }

    printf("%d dígitos pares, %d dígitos ímpares\n", pares, impares);

    return 0;
}
