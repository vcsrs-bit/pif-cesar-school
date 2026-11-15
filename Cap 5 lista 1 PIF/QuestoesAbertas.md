# Lista de Exercícios, Capítulo 5: Funções

**Disciplina:** Programação Imperativa e Funcional (PIF), 2026.2 · Cesar School

Respostas das questões teóricas (01 a 06). As questões práticas (07 a 28) estão nos arquivos `.c` desta pasta.

---

## Questão 01. Anatomia de uma função e o papel do protótipo

```c
float celsius(float);                       // protótipo
int main() {
    float c, f = 100.0;
    c = celsius(f);                         // chamada
    ...
}
float celsius(float fahr) {                 // definição
    return (fahr - 32.0) * 5.0 / 9.0;
}
```

**a)**

- **Protótipo** (`float celsius(float);`): declara a função antes de ser usada, informando ao compilador seu nome, o tipo de retorno e os tipos dos parâmetros. Ele não contém o corpo da função.
- **Chamada** (`c = celsius(f);`): é o ponto onde a função é usada. O valor de `f` é enviado como argumento e o valor retornado é guardado em `c`.
- **Definição** (`float celsius(float fahr) { ... }`): contém o corpo da função, ou seja, o código que realiza o cálculo.

**b)** O protótipo permite ao compilador **verificar a chamada** (quantidade e tipos dos argumentos, e o tipo do valor devolvido) e converter argumentos quando necessário. Se ele fosse omitido e a função fosse definida depois da `main()`, o compilador não conheceria a função no momento da chamada: em C89 ele assumiria uma declaração implícita (retorno `int` e nenhuma verificação de parâmetros), o que poderia gerar resultados errados, como interpretar um `float` retornado como `int`. Em compiladores modernos (C99 em diante), isso gera aviso ou erro.

**c)** A função `celsius()` é do tipo **`float`**. O tipo da função é determinado pelo valor que ela **devolve** ao chamador, porque é esse tipo que define como o resultado pode ser usado em expressões e atribuições (como em `c = celsius(f)`). Os parâmetros são apenas as entradas, cada um com seu próprio tipo, e funções com os mesmos parâmetros podem devolver tipos diferentes.

---

## Questão 02. O comando `return` e suas limitações

**a)** Uma função em C devolve **apenas um valor** por meio de `return`. Em `return soma, media;` o programador queria devolver dois valores, mas o que existe ali é o **operador vírgula**: ele avalia `soma`, descarta o resultado e a expressão inteira vale `media`. Assim, a função devolve só a média, e a soma é perdida.

**b)** O `return;` dentro de uma função `void` **encerra a função imediatamente**, sem devolver valor, e volta ao ponto de chamada. No exemplo, ele evita que a mensagem "Codigo processado" seja impressa quando `erro < 0`. Ele **não é obrigatório** no final de uma função `void`: ao chegar na chave que fecha a função, ela retorna automaticamente.

**c)** Reescrita em duas funções:

```c
int calcularMedia(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}
```

Em C, o `return` devolve **um único valor**. Para obter dois resultados diferentes usando apenas `return`, precisamos de duas funções, uma para cada resultado.

---

## Questão 03. Funções `void`, parâmetros e assinaturas

**a)**

| Protótipo | Parâmetros de entrada | Valor de retorno |
|---|---|---|
| `void exibe_mensagem(char* msg);` | 1 (ponteiro para `char`, uma string) | Nenhum (`void`) |
| `int obter_codigo(void);` | Nenhum | `int` |
| `void limpar_tela(void);` | Nenhum | Nenhum (`void`) |

**b)** Uma **função com retorno** calcula e devolve um valor que pode ser usado em expressões; é a melhor escolha quando precisamos de um resultado (por exemplo, calcular a média de três notas). Um **procedimento (`void`)** apenas executa uma ação, sem devolver nada; é a melhor escolha para tarefas como imprimir um menu ou limpar a tela.

**c)** **Não é válida.** `limpar_tela` é do tipo `void`, ou seja, não devolve valor algum, e não há o que atribuir a `x`. O compilador gera erro (valor `void` usado em uma atribuição).

---

## Questão 04. Recursão: caso base, passo recursivo e pilha de execução

```c
long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

**a)** O **caso base** é `n == 0`, que devolve `1`. O **passo recursivo** é `n * fatorial(n - 1)`. Se o caso base fosse removido, a função chamaria a si mesma indefinidamente, e o programa terminaria por estouro de pilha.

**b)** Rastreamento de `fatorial(4)`:

*Empilhamento (chamadas):*

```
fatorial(4) -> 4 * fatorial(3)
  fatorial(3) -> 3 * fatorial(2)
    fatorial(2) -> 2 * fatorial(1)
      fatorial(1) -> 1 * fatorial(0)
        fatorial(0) -> caso base, devolve 1
```

*Desempilhamento (retornos):*

| Chamada | Cálculo | Valor devolvido |
|---|---|---|
| `fatorial(0)` | caso base | 1 |
| `fatorial(1)` | 1 * 1 | 1 |
| `fatorial(2)` | 2 * 1 | 2 |
| `fatorial(3)` | 3 * 2 | 6 |
| `fatorial(4)` | 4 * 6 | **24** |

**c)** A cada chamada recursiva, o programa cria na **pilha de execução** um novo registro de ativação (*stack frame*), que guarda o parâmetro `n`, as variáveis locais e o endereço de retorno. Os registros se acumulam até chegar ao caso base e, depois, são removidos um a um (desempilhados) enquanto os valores são devolvidos. Em uma recursão sem caso base, os registros nunca param de ser criados, a pilha se esgota (*stack overflow*) e o programa falha, normalmente com erro de segmentação.

---

## Questão 05. Diretiva `#define`, constantes e macros com argumentos

```c
#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2
```

**a)** Saídas:

- `printf("%d\n", SQR(2+3));` imprime **25**, pois é expandido para `((2+3)*(2+3))`.
- `printf("%d\n", DOBRO(2+3));` imprime **8**, pois é expandido para `2+3*2`.

As macros fazem **substituição de texto**. Em `SQR`, os parênteses protegem o argumento e a expressão inteira, então a soma é feita antes da multiplicação. Em `DOBRO`, sem parênteses, a multiplicação tem precedência: `3*2 = 6` e depois `2 + 6 = 8`.

**b)** `#define` é uma **diretiva do pré-processador**, e não um comando C: ela vai até o fim da linha. Um ponto e vírgula no final seria copiado junto na substituição e poderia causar erros (por exemplo, `#define PI 3.14;` faria `PI * r` virar `3.14; * r`). Por **convenção**, usamos identificadores em maiúsculas para diferenciar constantes e macros de variáveis e funções.

**c)** `#define PRN (n) printf("%d", n)` está incorreto porque há um **espaço entre o nome da macro e o parêntese**. Assim, `PRN` é definida como uma macro **sem argumentos**, cujo texto de substituição é `(n) printf("%d", n)`. A forma correta é, sem espaço: `#define PRN(n) printf("%d", n)`.

Diferença entre macro com argumentos e função comum: a macro é expandida no pré-processamento, sem verificação de tipos e sem chamada em tempo de execução, e seus argumentos podem ser avaliados mais de uma vez (por exemplo, `SQR(i++)`). A função tem tipo, é verificada pelo compilador, tem escopo próprio e é chamada durante a execução.

---

## Questão 06. `#include`, `#undef` e compilação condicional

**a)** `#include <stdio.h>` procura o arquivo nos **diretórios padrão** do compilador e é usado para **bibliotecas padrão** do sistema. `#include "areas.h"` procura primeiro no **diretório do projeto** (onde está o arquivo-fonte) e, se não encontrar, nos diretórios padrão; é usado para **cabeçalhos criados pelo programador**.

**b)** `#undef SOMA` **remove a definição** da macro `SOMA`: a partir daquele ponto ela deixa de existir (e pode ser redefinida). A forma `#undef SOMA(x,y)` está incorreta porque `#undef` recebe **apenas o nome** (identificador) da macro, sem a lista de parâmetros.

**c)** Se `DEBUG` não foi definido, será impressa a mensagem **"Modo normal"**. Essa decisão é tomada no **pré-processamento**, antes da compilação: o pré-processador avalia `#ifdef DEBUG` e mantém apenas o trecho correspondente, descartando o outro. As diretivas **não aparecem no executável** porque são consumidas pelo pré-processador, e o compilador recebe só código C já processado, sem as linhas começando com `#`.
