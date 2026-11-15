#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long it, rec;

    printf("Digite um inteiro não negativo (até 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Erro: use um valor entre 0 e 20 (acima disso o long estoura).\n");
        return 1;
    }

    it = fatorialIterativo(n);
    rec = fatorialRecursivo(n);

    printf("Iterativo: %d! = %ld\n", n, it);
    printf("Recursivo: %d! = %ld\n", n, rec);
    if (it == rec) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados são diferentes!\n");
    }
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {                     /* caso base */
        return 1;
    }
    return n * fatorialRecursivo(n - 1); /* passo recursivo */
}
