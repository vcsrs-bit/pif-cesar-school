#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float a, b;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    printf("Escolha a operação: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
        return 1;
    }

    printf("Digite os dois operandos: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1: printf("Resultado: %.2f\n", soma(a, b)); break;
        case 2: printf("Resultado: %.2f\n", subtrai(a, b)); break;
        case 3: printf("Resultado: %.2f\n", multiplica(a, b)); break;
        case 4:
            if (b == 0) {
                printf("Erro: divisão por zero não é permitida!\n");
            } else {
                printf("Resultado: %.2f\n", divide(a, b));
            }
            break;
    }
    return 0;
}

float soma(float a, float b)      { return a + b; }
float subtrai(float a, float b)   { return a - b; }
float multiplica(float a, float b){ return a * b; }
float divide(float a, float b)    { return a / b; }
