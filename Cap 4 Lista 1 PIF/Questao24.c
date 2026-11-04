#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite os três ângulos internos (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Erro: os ângulos não formam um triângulo (a soma deve ser 180).\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triângulo Retângulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triângulo Obtusângulo\n");
    } else {
        printf("Triângulo Acutângulo\n");
    }
    return 0;
}
