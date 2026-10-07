# Resolução da Lista de Exercícios: Programação em C

---

### Questão 01. Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1)

A linguagem C diferencia rigorosamente letras maiúsculas e minúsculas na formação de nomes de identificadores e palavras-chave. Com base nessa premissa, analise os pares de identificadores abaixo e assinale a alternativa correta:

a) Os nomes de variáveis 'numero' e 'Numero' referenciam o mesmo endereço de memória.  
b) A palavra-chave 'Main' com 'M' maiúsculo é reconhecida pelo compilador como ponto de entrada válido.  
c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.  
d) A sensibilidade a caixa baixa/alta depende exclusivamente do sistema operacional utilizado na compilação.

**Resposta Correta: C**

---

### Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)

Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique três erros sintáticos/estruturais presentes no código:

```c
#include <stdio.h>

#nclude <stdlib.h>;  // Presença errada do ponto e vírgula e erro de digitação no include
int Main()  // main com M maiúsculo
{
    int idade = 20;

    printf( A idade do aluno eh: %d anos.. , idade);  // Falta das aspas
    Cesar School | Programação Imperativa e Funcional | Página 2 // Não está comentado corretamente
    cout << endl;  // Pertence ao C++ e não existe em C
    system("PAUSE");

    return 0;
}
```

**Erros Encontrados:**

1. Na linha `#nclude <stdlib.h>;` há um erro de digitação da diretiva (`#nclude` em vez de `#include`) e a inclusão de um ponto e vírgula ao final, o que é inválido para diretivas do pré-processador.
2. A função principal foi definida como `Main()` com letra maiúscula. Em C, a função principal obrigatoriamente deve ser declarada em minúsculo: `main()`.
3. O comando `printf` está com a string de formatação sem aspas duplas delimitando o texto.
4. O uso do comando `cout << endl;` pertence à linguagem C++ e causa erro de sintaxe em C (onde se usa `printf("\n");`).
5. A linha de texto `Cesar School | Programação Imperativa...` não foi comentada devidamente com `//` ou `/* ... */`.

---

### Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2)

Os operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da sequência abaixo:

```c
int a = 2, b = 4, c = 5, d = 10;

a += b + c;        // a = a + (4 + 5) => a = 2 + 9 = 11
b *= c = d - 2;    // c = 10 - 2 = 8, depois b = b * 8 = 4 * 8 = 32
d %= a + 3;        // d = d % (11 + 3) => d = 10 % 14 = 10
a += b += c += 5;  // c = 8 + 5 = 13; b = 32 + 13 = 45; a = 11 + 45 = 56
```

**Resultados Finais:**
* **a:** 56
* **b:** 45
* **c:** 13
* **d:** 10

---

### Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2)

Considere as variáveis inteiras `i = 2`, `j = 3`, `k = 0` e as variáveis de ponto flutuante `x = 2.5`, `y = 5.0`. Avalie cada expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso):

a) `i < j + 2`  
*Avaliação:* 2 < (3 + 2) => 2 < 5  
*Resultado:* **1**

b) `2 * i - 5 <= j - 4`  
*Avaliação:* (2 * 2) - 5 <= 3 - 4 => 4 - 5 <= -1 => -1 <= -1  
*Resultado:* **1**

c) `!k && (x + y >= 7.5)`  
*Avaliação:* !0 && (2.5 + 5.0 >= 7.5) => 1 && (7.5 >= 7.5) => 1 && 1  
*Resultado:* **1**

d) `!(i == j) || (y / x == 2.0)`  
*Avaliação:* !(2 == 3) || (5.0 / 2.5 == 2.0) => !(0) || (2.0 == 2.0) => 1 || 1  
*Resultado:* **1**

e) `i == 2 && j == 4 || k == 0`  
*Avaliação:* (2 == 2 && 3 == 4) || 0 == 0 => (1 && 0) || 1 => 0 || 1  
*Resultado:* **1**

---

### Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3)

As estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de `for`, `while` e `do-while` e responda fundamentadamente:

a) **Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?**  
No laço `while`, o teste condicional é feito antes de executar o bloco de código. Caso a condição seja falsa logo no início, o bloco não é executado nenhuma vez (mínimo de 0 execuções). Já no `do-while`, o teste condicional ocorre após a execução do bloco, garantindo que o código dentro dele seja executado pelo menos uma vez (mínimo de 1 execução).

b) **Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?**  
O laço `for` é mais indicado quando se sabe previamente a quantidade de iterações que devem ser executadas. Ele agrupa a inicialização da variável de controle, a condição de parada e o incremento em uma única linha, facilitando a leitura do código.

c) **O trecho de código 'while (condicao);' (com ponto e vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?**  
Não gera erro de compilação, pois o ponto e vírgula é interpretado como um comando vazio (instrução nula). É um erro de lógica. Se a condição for verdadeira, o programa entra em um laço infinito, executando repetidamente a instrução vazia sem alterar a variável da condição.

---

### Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3)

Analise o programa abaixo que calcula a soma acumulada de quadrados dentro de um laço `for` contendo um comando de desvio e controle de escopo interno:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;

        int soma = 0;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}
```

a) **Por que o compilador emitirá um erro de compilação na instrução printf final?**  
A variável `soma` foi declarada dentro das chaves do laço `for`. Por conta disso, seu escopo é local ao bloco interno do laço. Ao tentar usá-la na chamada do `printf`, fora desse bloco, o compilador não a reconhece. Além disso, declarar a variável dentro do laço faz com que ela seja reinicializada com zero a cada iteração, perdendo a soma acumulada.

b) **Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?**  
* Para `i = 1, 2, 3, 4`: O laço executa normalmente.
* Para `i = 5`: O comando `continue` ignora o restante do bloco e passa direto para a próxima iteração (`i++`).
* Para `i = 6, 7`: O laço executa normalmente.
* Para `i = 8`: O comando `break` encerra imediatamente a execução do laço `for`.

As iterações que realizam o cálculo são as de `i = 1, 2, 3, 4, 6 e 7`.

c) **Reescrita do código com a correção do escopo:**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {  
        if (i == 5) continue;  
        if (i == 8) break;  
        soma += i * i;  
    }  

    printf("Soma final = %d\n", soma);  
    system("PAUSE");

    return 0;  
}
```

*Saída gerada no console:*  
`Soma final = 115`  
*(Cálculo: 1² + 2² + 3² + 4² + 6² + 7² = 1 + 4 + 9 + 16 + 36 + 49 = 115)*