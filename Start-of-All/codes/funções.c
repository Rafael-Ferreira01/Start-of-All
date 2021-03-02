#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome(); // Protótipo da função
int main ()
{
    setlocale(LC_ALL,"");
    escrevaNome();
    return 0;
}

void escrevaNome() {
    printf("Bem vindo cuzão do caralho\n");
    return 0;

}
