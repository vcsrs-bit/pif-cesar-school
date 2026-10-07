
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
 double R, area, volume;
 float PI = 3.14

 printf("Digite o valor do raio R da esfera: ");
 scanf("%lf", &R);

 area = 4.0 * PI * pow(R, 2);
 volume = (4.0/3.0)* PI * pow(R, 3);

 printf("RESULTADO\n Area da superfice: %.3f\n Volume da esfera: %.3f\j", area, volume);

 return 0;

}
