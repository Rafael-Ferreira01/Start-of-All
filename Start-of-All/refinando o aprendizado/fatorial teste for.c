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
    printf("O valor do fator 50 é %i\n", resposta);

    return 0;
}
//50 é um numero muito grande, mas deu bom
