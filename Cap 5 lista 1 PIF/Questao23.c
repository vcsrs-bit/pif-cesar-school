#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    /* A macro faz substituição de TEXTO: DOBRO(2+3) vira 2+3*2.
       Como * tem precedência sobre +, o resultado é 2 + 6 = 8.
       A função recebe o valor já calculado (5) e devolve 10. */
    printf("Macro DOBRO(2+3)  = %d\n", DOBRO(2+3));
    printf("Função dobro(2+3) = %d\n", dobro(2+3));

    /* Correção: parênteses de proteção em volta do argumento e da expressão */
#undef DOBRO
#define DOBRO(x) ((x) * 2)

    printf("Macro corrigida DOBRO(2+3) = %d\n", DOBRO(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}
