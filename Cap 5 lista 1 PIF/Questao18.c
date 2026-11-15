#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base e o expoente (não negativo): ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente não pode ser negativo!\n");
        return 1;
    }

    printf("%d ^ %d = %ld\n", base, expoente, potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    /* Caso base: qualquer número elevado a 0 é 1 */
    if (expoente == 0) {
        return 1;
    }
    /* Passo recursivo: base * base^(expoente - 1) */
    return base * potencia(base, expoente - 1);
}
