#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os comprimentos dos tres lados do triangulo (a, b e c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

   
    p = (a + b + c) / 2.0;

    
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.3f\n", area);

    return 0;
}
