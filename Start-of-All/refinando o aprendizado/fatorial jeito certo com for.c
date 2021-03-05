#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "");

    int fatorial = 5;
    int resposta = 1;

    for ( ; fatorial >=1; --fatorial) {
        resposta *= fatorial;
    }
    printf ("O numero fatorial e' %i\n", resposta);

    return 0;
}
