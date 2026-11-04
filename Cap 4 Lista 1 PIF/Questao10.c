#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número é PAR.\n");
    } else {
        printf("O número é ÍMPAR.\n");
    }

    if (n > 0) {
        printf("O número é POSITIVO.\n");
    } else if (n < 0) {
        printf("O número é NEGATIVO.\n");
    } else {
        printf("O número é ZERO.\n");
    }
    return 0;
}
