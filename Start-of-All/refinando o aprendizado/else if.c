#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int idade;

    printf("Informar idade\n");
    scanf ("%i", &idade);

    if (idade <= 5)
        printf ("bebe");
    else if (idade > 5 && idade <= 10)
        printf ("Crianca\n");
    else if (idade > 10 && idade < 18)
        printf ("Adolescente\n");
    else if (idade >= 18 && idade <= 50)
        printf ("Adulto\n");
    else
        printf ("Idoso\n");

    return 0;
}
