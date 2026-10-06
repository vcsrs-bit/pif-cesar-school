 PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS (CONCEITOS E PRECEDÊNCIA) 

 1 -
 a) Diferença essencial entre while e do-while
    Momentos de avaliação: Na estrutura while (pré-testada), a condição lógica é avaliada antes de qualquer execução do bloco. Na estrutura do-while (pós-testada), a condição é avaliada ao final do bloco de código.
    Número mínimo de execuções:
        while: 0 execuções (se a condição for falsa na primeira verificação, o bloco é ignorado).
        do-while: 1 execução (o bloco é obrigatoriamente executado ao menos uma vez antes do teste).

b) Situações ideais para cada estrutura:
  for: Ideal quando o número de iterações é previamente determinado ou determinado por um intervalo fixo/contável de passos (ex.: percorrer arrays, iterar de 1 a $N$).
  while: Ideal quando o término do laço depende de uma condição lógica cujo momento de ocorrência não é fixo e a verificação deve anteceder o bloco (ex.: ler linhas de um arquivo até atingir EOF).
  do-while: Ideal para fluxos em que a primeira execução é obrigatória antes da validação (ex.: exibição de menus interativos e validação de entrada de dados do usuário).
  
c) Análise do trecho while (condicao);:
    Trata-se de um erro de lógica, não de compilação. Em C, a instrução nula (constituída apenas pelo ponto e vírgula ;) assume o papel do corpo do laço.
    Execução se condicao for verdadeira: O programa entra em um laço infinito travado. Ele testará a condição repetidamente, e como não há código no corpo para alterar o estado da variável envolvida, 
    a condição permanecerá permanentemente verdadeira, travando o fluxo nessa linha.

2- 
a) Erro de compilação no printf final:
O compilador emitirá um erro de declaração ('soma' undeclared / 'soma' não declarada) porque a variável soma foi declarada dentro do bloco do laço for. 
Seu escopo é restrito ao bloco delimitado pelas chaves {} do laço, tornando-a invisível para instruções fora desse escopo.

b) Erro conceitual ao mover o printf para dentro do laço:
A cada iteração, ao reentrar no bloco do for, a variável soma é recriada e reinicializada com 0. 
Dessa forma, a linha soma += i * i; acumulará o valor apenas da iteração corrente, sem manter o histórico acumulado das iterações anteriores (a saída mostraria os quadrados individuais $1, 4, 9, \dots$, e não a soma acumulada).

c)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada e inicializada no escopo de main

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;

3-
A) A Sequencia sera 36	18	9	4	2	1

B)
Comportamento do Trecho B:
Operação ch + 1: Realiza uma operação aritmética simples com base na tabela ASCII. Imprime o caractere imediatamente posterior ao lido (ex.: digitando 'A', imprime 'B').
Necessidade dos parênteses (ch = getch()): O operador de comparação relacional != possui precedência maior que o operador de atribuição =. Sem os parênteses, o compilador avaliaria getch() != 'X' primeiro (retornando 1 ou 0) e atribuiria esse valor booleano à variável ch, corrompendo a leitura do caractere original

C) Para encerrar a execução do laço infinito for (;;) sem interromper o processo no SO, utiliza-se a instrução de desvio break; associada a alguma condição de guarda dentro do bloco.

4-
a) Ação do break:
Interrompe imediatamente a execução do laço (for, while ou do-while), saltando a execução do fluxo de programa para a primeira linha de instrução após a estrutura do laço.

b) Ação do continue no laço for:
Interrompe apenas a iteração atual do laço, ignorando todas as instruções do bloco que estejam abaixo dele e desviando o fluxo diretamente para a expressão de incremento/atualização (a terceira instrução no cabeçalho do for). Em seguida, reavalia a expressão de teste para decidir se continua para a próxima iteração.

c) Comportamento em laços aninhados:
O comando break encerra apenas o laço interno (o laço do nível de aninhamento mais imediato onde a instrução break foi executada). O laço externo continua sua execução normal.

5-
a) 5 Iterações

b) i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c)
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

6-
A)Valor final de x = 6

B)
Entrada ($x = 0$): Teste 0 < 5 é Verdadeiro. $x$ passa a ser 1. Executa o corpo nulo.
Passo 2 ($x = 1$): Teste 1 < 5 é Verdadeiro. $x$ passa a ser 2. Executa o corpo nulo.
Passo 3 ($x = 2$): Teste 2 < 5 é Verdadeiro. $x$ passa a ser 3. Executa o corpo nulo.
Passo 4 ($x = 3$): Teste 3 < 5 é Verdadeiro. $x$ passa a ser 4. Executa o corpo nulo.
Passo 5 ($x = 4$): Teste 4 < 5 é Verdadeiro. $x$ passa a ser 5. Executa o corpo nulo.
Passo 6 ($x = 5$): Teste 5 < 5 é Falso. Contudo, o efeito colateral do incremento ocorre, e $x$ é atualizado para 6.
O laço encerra e o printf imprime 6.

c)
int x = 0;
while (x < 5) {
    x++;
}
x++; // Simula o incremento final referente à iteração que falha no teste

printf("Valor final de x = %d\n", x);
