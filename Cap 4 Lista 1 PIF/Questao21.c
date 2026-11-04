#include <stdio.h>

int main(void) {
    float salario, percentual, aumento;
    int cargo;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);
    printf("Código do cargo (1 = Técnico | 2 = Gerente | 3 = Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000) ? 15 : 10;
            break;
        case 2:
            percentual = (salario <= 5000) ? 10 : 5;
            break;
        case 3:
            percentual = 8;
            break;
        default:
            printf("Erro: código de cargo inválido!\n");
            return 1;
    }

    aumento = salario * percentual / 100;
    printf("Aumento (%.0f%%): R$ %.2f\n", percentual, aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);
    return 0;
}
