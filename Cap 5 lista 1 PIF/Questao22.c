#include <stdio.h>
#include "areas.h"

int main(void) {
    float raio, base, alt;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &alt);

    printf("Área do círculo:    %.2f\n", A_CIRC(raio));
    printf("Área do retângulo:  %.2f\n", A_RET(base, alt));
    printf("Área do triângulo:  %.2f\n", A_TRI(base, alt));
    return 0;
}
