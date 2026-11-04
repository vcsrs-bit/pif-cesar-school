#include <stdio.h>

int main(void) {
    int idade, tempo;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço (anos): ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("O trabalhador PODE se aposentar.\n");
    } else {
        printf("O trabalhador NÃO pode se aposentar ainda.\n");
    }
    return 0;
}
