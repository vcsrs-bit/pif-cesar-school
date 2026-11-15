#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int qtd, i;

    printf("Quantos termos da sequência? ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Erro: informe uma quantidade positiva!\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

/* A versão recursiva fica lenta para n grande porque recalcula os mesmos
   termos muitas vezes (fibonacci(n) chama fibonacci(n-1) e fibonacci(n-2),
   que repetem chamadas entre si). O número de chamadas cresce de forma
   exponencial; uma versão com laço ou memorização é muito mais rápida. */
long fibonacci(int n) {
    if (n == 0) return 0;     /* caso base 1 */
    if (n == 1) return 1;     /* caso base 2 */
    return fibonacci(n - 1) + fibonacci(n - 2);
}
