#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome(); // Prot�tipo da fun��o
int main ()
{
    setlocale(LC_ALL,"");
    escrevaNome();
    return 0;
}

void escrevaNome() {
    printf("Bem vindo cuz�o do caralho\n");
    return 0;

}
