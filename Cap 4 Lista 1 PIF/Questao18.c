#include <stdio.h>

int main(void) {
    int opcao;
    double t, r;

    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    scanf("%lf", &t);

    switch (opcao) {
        case 1: r = t * 1.8 + 32;  printf("%.2f C = %.2f F\n", t, r); break;
        case 2: r = t + 273.15;    printf("%.2f C = %.2f K\n", t, r); break;
        case 3: r = (t - 32) / 1.8; printf("%.2f F = %.2f C\n", t, r); break;
        case 4: r = t - 273.15;    printf("%.2f K = %.2f C\n", t, r); break;
    }
    return 0;
}
