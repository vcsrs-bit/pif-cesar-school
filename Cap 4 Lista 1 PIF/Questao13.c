#include <stdio.h>
#include <math.h>

int main(void) {
    char op;
    double a, b;

    printf("=== CALCULADORA ===\n");
    printf("+ Soma\n- Subtração\n* Multiplicação\n/ Divisão\n^ Potenciação\n");
    printf("Escolha a operação: ");
    scanf(" %c", &op);

    printf("Digite os dois operandos: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b); break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b); break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b); break;
        case '/':
            if (b == 0) {
                printf("Erro: divisão por zero não é permitida!\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        case '^': printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b)); break;
        default: printf("Erro: operação inválida!\n");
    }
    return 0;
}
