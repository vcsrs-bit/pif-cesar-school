#include <stdio.h>

float celsius(float fahr);

int main(void) {
    float f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);
    printf("%.2f F = %.2f C\n", f, c);
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
