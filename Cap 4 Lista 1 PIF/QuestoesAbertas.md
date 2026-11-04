# Programação Imperativa e Funcional: Parte I (Questões Teóricas)

**Cesar School** · Respostas das Questões 01 a 06 (Linguagem C)

---

## Questão 01. Condição `if`, atribuição vs. igualdade

**a) `if (x = 0)` em vez de `if (x == 0)`**

O operador `=` é de **atribuição**, e não de comparação. Em `if (x = 0)`, o programa atribui `0` a `x` e a própria expressão de atribuição vale `0` (o valor atribuído). Como `0` é interpretado como **falso**, o bloco do `if` **nunca é executado** (se houver `else`, ele será executado). Além disso, `x` **perde o valor que tinha** e passa a valer `0`. É um erro clássico, e por isso os compiladores costumam avisar com `-Wall`.

**b) Valores numéricos dentro do `if`**

A linguagem C não exige um tipo booleano: qualquer valor escalar pode ser condição. A regra é:

- **Falso:** valor igual a zero (`0`, `0.0`, `'\0'`, ponteiro nulo).
- **Verdadeiro:** qualquer valor diferente de zero (`1`, `-5`, `0.1`, `3.14`...).

**c) `if (x = -5)`**

O valor `-5` é atribuído a `x` e a expressão inteira vale `-5`, que é **diferente de zero**, logo é **verdadeira**. O bloco **será executado**. No padrão ANSI C, o primeiro comando do `if` é executado quando a expressão é diferente de 0 (seção do comando `if`, 3.6.4.1 no C89), e, por isso, números negativos também são "verdadeiros".

---

## Questão 02. `else` e aninhamento

```c
int x = 15, y = 5;
if (x > 10)
    if (y > 10)
        printf("Opção A\n");
    else
        printf("Opção B\n");
```

**a)** Será impresso **`Opção B`**. A primeira condição (`x > 10`) é verdadeira, então o `if` interno é avaliado; como `y > 10` é falso, o `else` entra em ação. Ou seja, a Opção B é exibida porque o `else` pertence ao `if` interno, e não ao externo.

**b)** Regra oficial: em códigos **sem chaves**, o `else` é associado ao **`if` mais próximo que ainda não tenha `else`** (problema do *dangling else*). A indentação não influencia o compilador.

**c)** Com chaves, para imprimir a Opção B **apenas quando `x <= 10`**:

```c
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

---

## Questão 03. Operador ternário vs. `if-else`

```c
media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';
```

**a)** O operador ternário tem a forma `condição ? valor_se_verdadeiro : valor_se_falso`. Na segunda linha, avalia-se `media >= 7.0`: se for verdadeira, `situacao` recebe `'A'` (Aprovado); caso contrário, recebe `'R'` (Reprovado). Só **um** dos dois ramos é avaliado. Com `media = 6.8`, a condição é falsa e `situacao` recebe **`'R'`**.

**b)** Com `if-else`:

```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** **Não.** O ternário é uma **expressão** (produz um valor) e seus ramos devem ser expressões de tipos compatíveis. Limitações:

- Não comporta **blocos com vários comandos** (como declarar variáveis, usar `for` ou executar vários `printf` com lógica).
- Ramos muito longos ou aninhados deixam o código **ilegível**.
- O `if-else` é um **comando** e pode executar ações diversas, enquanto o ternário serve melhor para escolher entre dois valores.

---

## Questão 04. `switch-case` e *fall-through*

**a)** Com `codigo = 2`, a saída exata é:

```
Prata
Ouro
```

O programa entra em `case 2`, imprime "Prata", e como **não há `break`** ali, continua executando o `case 3` e imprime "Ouro". O `break` do `case 3` encerra o `switch`.

**b)** O `break` **interrompe o `switch`** e transfere a execução para o comando seguinte ao bloco. Quando ele é omitido, ocorre o **fall-through** ("queda"): a execução continua nos `case` seguintes, mesmo sem que eles correspondam ao valor.

**c)** A expressão do `switch` deve ser de **tipo inteiro**: `int`, `char`, `short`, `long`, além de `enum`, e os rótulos `case` precisam ser **constantes inteiras**. **Não é permitido `float` ou `double`**, porque números reais têm representação aproximada e comparar igualdade exata não é confiável. Por isso, a linguagem restringe o `switch` a tipos inteiros.

---

## Questão 05. Curto-circuito

```c
int a = 0, b = 5, c = 10;
if (a != 0 && ++b > 5)
    c += 10;
else
    c -= 2;
printf("a = %d, b = %d, c = %d\n", a, b, c);
```

**a)** Saída: **`a = 0, b = 5, c = 8`**. Como `a != 0` é falso, o `&&` já sabe que o resultado será falso e **ignora** `++b > 5`. Assim, `b` **não é incrementado**. O `else` é executado e `c` passa de 10 para 8.

**b)** Avaliação de curto-circuito:

- **`&&` (E):** se o operando da esquerda é **falso**, o resultado é falso e o da direita **não é avaliado**.
- **`||` (OU):** se o operando da esquerda é **verdadeiro**, o resultado é verdadeiro e o da direita **não é avaliado**.

**c)** Com `if (a == 0 || ++b > 5)`: `a == 0` é verdadeiro, então o `||` já tem o resultado e **não avalia `++b`**. O bloco do `if` é executado. Valores finais: **`b = 5`** e **`c = 20`**.

---

## Questão 06. `else-if` e intervalos

```c
int idade = 25;
if (idade >= 60) printf("Idoso\n");
if (idade >= 18) printf("Adulto\n");
if (idade >= 12) printf("Jovem\n");
else printf("Criança\n");
```

**a)** Para `idade = 65`, a saída é:

```
Idoso
Adulto
Jovem
```

São impressas várias mensagens porque os três `if` são **independentes**: cada um é avaliado separadamente e `65` satisfaz as três condições. O `else` pertence apenas ao último `if`.

**b)** Em uma sequência de `if` independentes, **todas** as condições são testadas e vários blocos podem ser executados. Em uma cadeia `else-if`, as condições são testadas **em ordem** e, assim que uma é verdadeira, **as demais são ignoradas**, ou seja, no máximo um bloco é executado.

**c)** Versão correta:

```c
int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```
