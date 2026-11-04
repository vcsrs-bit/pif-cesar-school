#include <stdio.h>

int main(void) {
    int a, b, c, aux;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Três comparações com troca (sem vetores) */
    if (a > b) { aux = a; a = b; b = aux; }
    if (b > c) { aux = b; b = c; c = aux; }
    if (a > b) { aux = a; a = b; b = aux; }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
    return 0;
}
