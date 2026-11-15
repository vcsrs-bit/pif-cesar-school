#include <stdio.h>

int ehPar(int n);

int main(void) {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("%d é PAR.\n", n);
    } else {
        printf("%d é ÍMPAR.\n", n);
    }
    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
