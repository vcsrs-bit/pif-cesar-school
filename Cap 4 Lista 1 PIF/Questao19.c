#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Digite os três lados do triângulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }
    return 0;
}
