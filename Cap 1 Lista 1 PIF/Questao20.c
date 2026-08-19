#include <stdio.h>

int main(){
    char cantosuperioresquerdo = '\xC9';
    char cantosuperiordireito = '\xBB';
    char cantoinferioresquerdo = '\xC8';
    char cantoinferiordireito = '\xBC';
    char linhahorizontal = '\xCD';
    char linhavertical = '\xBA';
    printf("%c%c%c%c\n", cantosuperioresquerdo, linhahorizontal, linhahorizontal, cantosuperiordireito);
    printf("%c    %c\n", linhavertical, linhavertical);
    printf("%c    %c\n", linhavertical, linhavertical);
    printf("%c%c%c%c\n", cantoinferioresquerdo, linhahorizontal, linhahorizontal, cantoinferiordireito);

    return 0;
}
