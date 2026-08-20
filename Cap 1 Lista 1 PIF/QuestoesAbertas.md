Questão 7:
O primeiro print será assim:
"
 Bom  Dia  Shirley."
o segundo print será assim:
"Você já tomou café?
 "
O terceiro print será assim:
"

A solução não existe!
Não Insista."
o quarto print será assim:
"Duas  Linhas  De  Saidá
Ou  uma?"
o quinto print será assim:
"um
dois
três"
-------------------------------------------------------------------------------------------------------------------------------
Questão 9

|| Em C, tudo que está no modificador %c é considerado um caractere.
|| '\n' em vez da letra N, ele irá pular para próxima linha.
|| '\t' em vez da letra T, ele irá fazer a tabulação.
|| '\"' vai dizer para imprimir apenas as aspas mas não terminar aqui.
|| O programa irá imprimir no final: "Primeiro programa
||                                     Pressione qualquer tecla para continuar. . .
|| Na penultima linha "printf("%c", "\"");" o compilador ira dar um aviso e ocorrera uma reserva de memoria lixo 
----------------------------------------------------------------------------------------------------------------------------------

Questão 10

|| b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
|| Justificativa: A linguagem C é muito sensivel a letras maiusculas e minusculas, alocando diferentes variaveis. 
|| Se eu fosse fazer Numero, numero, NUMERO o programa entenderia que são três variaveis diferentes que armazenam coisas diferentes.
----------------------------------------------------------------------------------------------------------------------------------------------
Questão 11
|| \r ||  é uma constante de caractere de escape || char
|| 2130 || constante inteira decimal || int
|| -123 || constante inteira deimal || int
|| 33.28 || constante de ponto flutuante || double
|| 0XFA || constante hexadecimal inteira || int
|| 0101 || constante inteira octal || int
|| 2.0e30 || constante de ponto flutuante em notação cientifica || double
|| \xDC || caractere de escape em hexadecimal || char
|| '\"' || constante de caractere de escape || char
|| '\\' || constante de caractere de escape || char
|| 'F' || constante de caractere simples || char
|| 0 || constante de numero inteiro || int
|| '\0' || constante de caractere nulo (fim de linha) || char
|| "F" || Cadeia de caracteres || char [] ou char *
|| -4567.89 || Constante de caractere decimal negativa || double
----------------------------------------------------------------------------------------------
Questão 12
|| a) int a; [ Correto ] [ Declaração correta de uma variavel inteira ]
|| b) float b; [ Correto ] [ Declaração correta de uma variavel decimal ]
|| c) double float c; [ Incorreto ] [ Double ou float são exclusivos para uma variavel, não há como declarar os dois em uma unica variavel. ]
|| d) unsigned char d; [ Correto ] [ Declaração correta de uma variavel reservada sem sinal ]
|| e) unsigned e; [ Correto ] [ O compilador irá assumir que o e é um int ]
|| f) long float f; [ Incorreto ] [ O Correto seria long double, o metodo long float já não é mais utilizado em C moderno. ]
|| g) long g; [ Correto ] [ O compilador assumirá que o g é um numero inteiro long (long int) ]
|| h) long double h; [ Correto ] [ declaração correta de um numero decimal/ponto flutuante estendido em C. ]
---------------------------------------------------------------------------------------------------------------------------------------------------------
Questão 13
|| c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.
-----------------------------------------------------------------------------------------------------------------------------------------------------------
Questão 14
|| a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.
-------------------------------------------------------------------------------------------------------------------------------------------------------------
Questão 15
|| c) Uma diretiva especial para o pré-processador C, executada antes da compilação.
-------------------------------------------------------------------------------------------------------
Questão 16 
|| c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).
---------------------------------------------------------------------------------------------------------------------
Questão 17
|| a) printf ( "Primeiro programa" );
|| b) printf( "Primeiro programa" );
|| c) printf("Primeiro programa");
|| isso mostra que o C não é tão rigido quanto se imagina em relação a espaços, ele ainda consegue ler e compilar os comandos de printf.
-----------------------------------------------------------------------------------------------------------------------------------------------

