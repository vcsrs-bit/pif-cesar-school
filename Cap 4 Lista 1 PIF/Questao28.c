#include <stdio.h>

int main(void) {
    int opcao;

    printf("=== ATENDIMENTO AUTOMÁTICO ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Direcionando para Consulta de Saldo...\n"); break;
        case 2: printf("Direcionando para Extrato...\n"); break;
        case 3: printf("Direcionando para Transferência...\n"); break;
        case 4: printf("Aguarde, transferindo para um atendente...\n"); break;
        default: printf("Opção inválida! Tente novamente.\n");
    }
    return 0;
}
