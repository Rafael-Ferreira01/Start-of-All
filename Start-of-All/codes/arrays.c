#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas [ 4 ];
    int i;

    //Lendo as merda do aluno
    for (i = 0; i < 4; i++) {
    printf ("Entre com as %d cagada do aluno:\n", i+1);
    scanf("%f", &notas [i]);
    }

    //Mostrando na tela as cagada armazenadas
    for (i=0; i < 4; i++) {
    printf ("Nota %d = %4.2f\n", i+1, notas[i]);
    }
return 0;
}
