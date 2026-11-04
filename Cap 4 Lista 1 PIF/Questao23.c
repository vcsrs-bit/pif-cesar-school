#include <stdio.h>

int main(void) {
    int dia, mes, ano;
    const char *nome;

    printf("Digite a data (dia mês ano), ex.: 25 12 2026: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12) {
        printf("Erro: mês inválido!\n");
        return 1;
    }

    switch (mes) {
        case 1:  nome = "janeiro";   break;
        case 2:  nome = "fevereiro"; break;
        case 3:  nome = "março";     break;
        case 4:  nome = "abril";     break;
        case 5:  nome = "maio";      break;
        case 6:  nome = "junho";     break;
        case 7:  nome = "julho";     break;
        case 8:  nome = "agosto";    break;
        case 9:  nome = "setembro";  break;
        case 10: nome = "outubro";   break;
        case 11: nome = "novembro";  break;
        default: nome = "dezembro";  break;
    }

    printf("%d de %s de %d\n", dia, nome, ano);
    return 0;
}
