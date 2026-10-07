#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Informe uma nota de 0 a 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Valor incorreto. Tente de novo!\n");
        }
    } while (nota < 0 || nota > 10);

    printf("Nota cadastrada: %.2f\n", nota);

    return 0;
}
