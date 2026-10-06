#include <stdio.h>

void versao_for() {
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void versao_while() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void versao_do_while() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    versao_for();
    versao_while();
    versao_do_while();
    return 0;
}
/*
A estrutura 'for' eh a mais adequada para este caso porque o numero de iteracoes 
eh previamente conhecido (de 0 a 100). O 'for' permite agrupar a inicializacao, 
a condicao de parada e o incremento em uma unica linha, tornando o codigo mais limpo.
*/
