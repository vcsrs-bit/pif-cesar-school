#include <stdio.h>

int main(void) {
    int horas;
    float valor;

    printf("Horas de permanência (inteiras): ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: informe pelo menos 1 hora.\n");
        return 1;
    }

    if (horas <= 2) {
        valor = horas * 2.00f;
    } else if (horas <= 4) {
        valor = 2 * 2.00f + (horas - 2) * 2.50f;
    } else {
        valor = 2 * 2.00f + 2 * 2.50f + (horas - 4) * 3.00f;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor cobrado: R$ %.2f\n", valor);
    return 0;
}
