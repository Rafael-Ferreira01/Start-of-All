#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "");

    int fator = 50;
    int resposta = 1;

    for ( ; fator >= 1; --fator){
        resposta *= fator;
    }
    printf("O valor do fator 50 � %i\n", resposta);

    return 0;
}
//50 � um numero muito grande, mas deu bom
