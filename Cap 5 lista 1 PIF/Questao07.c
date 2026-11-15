#include <stdio.h>

int soma(int a, int b);

int main(void) {
    int a, b, resultado;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    resultado = soma(a, b);
    printf("Soma: %d\n", resultado);
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
