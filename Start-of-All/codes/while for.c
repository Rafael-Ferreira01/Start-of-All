#include <stdio.h>
#include <stdlib.h>

int main ()
{
int cont;
char cod;
float nota, media, total;
total = 0;
cod = 'C';
while (cod != 'F') {
    for (cont = 1; cont <=4; cont++){
        printf ("Digite a nota: ");
        scanf ("%f", &nota);
        total = total + nota;
    }
    media = total / 4;
    printf("Nota media: %.2f\n\n", media);
    total = 0;
    nota = 0;
    printf ("Deseja calcular a media de mais um aluno? Pressione qualquer tecla ou F para encerrar \n");
    cod = getche();
    }
    return 0;
    }
