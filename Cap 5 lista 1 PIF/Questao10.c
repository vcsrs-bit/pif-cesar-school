#include <stdio.h>

#define PI 3.14159

float area(float r);

int main(void) {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0) {
        printf("Erro: o raio não pode ser negativo!\n");
        return 1;
    }

    printf("Área da esfera: %.2f\n", area(raio));
    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}
