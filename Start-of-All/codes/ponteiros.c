#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    int *x, valor, y;
    valor = 35;
    x = &valor; // Atribuindo o ?Endere�o de valor a x
    y = *x; // Atribuindo o conte�do da var apontada por x a y

    printf ("Endere�o da vari�vel comum valor: %p\n", &valor);
    printf ("Lendo o conteudo do ponteiro x: %p\n", x);
    printf ("Endere�o da variavel ponteiro x: %p\n", &x);
    printf ("Conteudo da variavel apontada por x: %d\n", *x);
    printf ("Conteudo da variavel comum y: %d\n", y);

    /* */

}
