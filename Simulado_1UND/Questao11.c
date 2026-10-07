#include <stdio.h>

int main() {
    int dias;
    float bruto, grat, imp, liquido;

    printf("Informe os dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.0;
    grat = bruto * 0.05;
    imp = bruto * 0.08;
    liquido = bruto + grat - imp;

    printf("\n--- Relatorio ---\n");
    printf("Dias: %d\n", dias);
    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Gratificacao: R$ %.2f\n", grat);
    printf("Imposto: R$ %.2f\n", imp);
    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}
