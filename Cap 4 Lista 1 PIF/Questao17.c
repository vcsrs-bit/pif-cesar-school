#include <stdio.h>

int main(void) {
    float valor, final, parcela, comissao;
    int opcao;

    printf("Valor total da compra: R$ ");
    scanf("%f", &valor);
    printf("Pagamento (1 = À vista com 10%% de desconto | 2 = 3x sem juros): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90f;
        comissao = final * 0.05f;
        printf("Valor final à vista: R$ %.2f\n", final);
    } else if (opcao == 2) {
        parcela = valor / 3;
        comissao = valor * 0.05f;
        printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
    } else {
        printf("Erro: opção de pagamento inválida!\n");
        return 1;
    }

    printf("Comissão do vendedor: R$ %.2f\n", comissao);
    return 0;
}
