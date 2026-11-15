#include <stdio.h>

#define DEBUG

int somaAteN(int n);

int main(void) {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Soma de 1 até %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int soma = 0, i;
    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}
