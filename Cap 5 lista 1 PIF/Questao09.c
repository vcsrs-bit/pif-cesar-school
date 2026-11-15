#include <stdio.h>

int maior(int a, int b);

int main(void) {
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("O maior é: %d\n", maior(a, b));
    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
