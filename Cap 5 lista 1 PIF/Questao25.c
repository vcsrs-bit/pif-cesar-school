#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int a, b;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: digite números positivos!\n");
        return 1;
    }

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);
    return 0;
}

int mdc(int a, int b) {
    /* Algoritmo de Euclides. Caso base: resto zero */
    if (b == 0) {
        return a;
    }
    /* Passo recursivo: mdc(a, b) = mdc(b, a % b) */
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int d = mdc(num, den);
    printf("Fração %d/%d simplificada: %d/%d\n", num, den, num / d, den / d);
}
