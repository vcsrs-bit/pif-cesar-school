#include <stdio.h>

int main(void) {
    float lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratório (peso 2): ");
    scanf("%f", &lab);
    printf("Nota da Avaliação Semestral (peso 3): ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final (peso 5): ");
    scanf("%f", &final);

    media = (lab * 2 + semestral * 3 + final * 5) / 10;
    printf("Média ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situação: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Aprovado\n");
    }
    return 0;
}
