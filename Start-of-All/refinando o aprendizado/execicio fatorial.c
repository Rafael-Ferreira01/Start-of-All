//Exercicio de fatorial
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int fator = 7;
    int resposta = 1;

    for (; fator >= 1; fator--){
        resposta *= fator;
    }
    printf ("O fatorial de 7 e' %i\n", resposta);

    return 0;
}
// o fatorial de 7 é 5040
