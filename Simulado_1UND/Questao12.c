#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf("Nota invalida! Digite novamente: ");
        scanf("%f", &nota);
    }

    printf("\nNota aceita: %.1f\n", nota);

    return 0;
}
