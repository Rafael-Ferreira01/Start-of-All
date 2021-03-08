#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int idade;

    printf ("Favor informar a idade: \n");
    scanf ("%i", &idade);

    if (idade < 18){
        printf ("Bebidas alcoolicas estao proibidas");
    } else {
        printf ("Bebidas alcoolicas estao liberadas");
    }

    return 0;
}
