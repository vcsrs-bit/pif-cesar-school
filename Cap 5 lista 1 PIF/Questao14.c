#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: digite um número positivo!\n");
        return 1;
    }

    printf("Soma dos dígitos de %d = %d\n", n, somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    /* Caso base: quando n == 0, não há mais dígitos para somar */
    if (n == 0) {
        return 0;
    }
    /* Passo recursivo: último dígito (n % 10) + soma dos dígitos do restante (n / 10) */
    return (n % 10) + somaDigitos(n / 10);
}
