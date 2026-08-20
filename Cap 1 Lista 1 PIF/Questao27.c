#include <stdio.h>

int main(){
  int total_segundos, horas, minutos, segundos;
  printf("Digite o tempo em segundos \n");
  scanf("%d", &total_segundos);
  horas = total_segundos / 3600;
  int resto = total_segundos % 3600;
  minutos = resto / 60;
  segundos = resto % 60;
printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", total_segundos, horas, minutos, segundos);
return 0;
}
