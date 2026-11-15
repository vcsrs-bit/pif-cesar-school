#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int opcao;
    float t;

    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &t);

    switch (opcao) {
        case 1: printf("%.2f C = %.2f F\n", t, celsiusParaFahrenheit(t)); break;
        case 2: printf("%.2f C = %.2f K\n", t, celsiusParaKelvin(t)); break;
        case 3: printf("%.2f F = %.2f C\n", t, fahrenheitParaCelsius(t)); break;
        case 4: printf("%.2f K = %.2f C\n", t, kelvinParaCelsius(t)); break;
    }
    return 0;
}

float celsiusParaFahrenheit(float c) { return c * 1.8f + 32; }
float celsiusParaKelvin(float c)     { return c + 273.15f; }
float fahrenheitParaCelsius(float f) { return (f - 32) / 1.8f; }
float kelvinParaCelsius(float k)     { return k - 273.15f; }
