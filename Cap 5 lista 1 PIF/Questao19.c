#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;

    printf("Digite um número positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o número deve ser positivo!\n");
        return 1;
    }

    printf("--- Regressiva (n até 1) ---\n");
    contagem(n);

    printf("--- Crescente (1 até n) ---\n");
    contagemCrescente(n);
    printf("Fogo!\n");
    return 0;
}

/* Versão 1: imprime ANTES de chamar a recursão -> ordem decrescente */
void contagem(int n) {
    if (n == 0) {              /* caso base */
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

/* Versão 2: a chamada recursiva vem ANTES do printf.
   Primeiro a função "desce" até o caso base (n == 0) e só imprime
   durante o desempilhamento, ou seja, na ordem inversa: 1, 2, ..., n.
   Mudando a posição da chamada em relação ao printf, muda a ordem de saída. */
void contagemCrescente(int n) {
    if (n == 0) {              /* caso base */
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
