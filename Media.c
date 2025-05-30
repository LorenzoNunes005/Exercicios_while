#include <stdio.h>

int main() {
    float nota, soma = 0;
    int quantidade = 0;

    printf("Digite notas entre 0 e 10:\n");

    while (1) {
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            break; // Encerra se a nota for inválida
        }

        soma += nota;
        quantidade++;
    }

    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("Média = %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi digitada.\n");
    }

    return 0;
}
