#include <stdio.h>

int main(void) {
    float valor, aliquota;
    int estado;

    printf("Valor do produto: R$ ");
    scanf("%f", &valor);
    printf("Estado (1 = MG | 2 = SP | 3 = RJ | 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: aliquota = 7;  break;
        case 2: aliquota = 12; break;
        case 3: aliquota = 15; break;
        case 4: aliquota = 8;  break;
        default:
            printf("Erro: código de estado inválido!\n");
            return 1;
    }

    printf("Imposto (%.0f%%): R$ %.2f\n", aliquota, valor * aliquota / 100);
    printf("Preço final: R$ %.2f\n", valor * (1 + aliquota / 100));
    return 0;
}
