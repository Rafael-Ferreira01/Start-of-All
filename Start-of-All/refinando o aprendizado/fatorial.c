#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "");

    int num5 = 5;
    int num4 = 4;
    int num3 = 3;
    int num2 = 2;
    int resultado;

    resultado = num5 * num4 * num3 * num2 ;

    printf ("O fatorial de 5 é igual a: %i\n", resultado);

    return 0;
}

/* Melhor maneira é com o ciclo for
int main ()
{
    int fatorial = 5;
    int resposta = 1;

    for ( ; fatorial >=1; --fatorial) {
        resposta *= fatorial;
    }

    return 0;
}
