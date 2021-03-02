#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_L 5
#define NUM_C 4

int main()
{
    setlocale (LC_ALL, "");

    int linha, coluna;
    float notas [NUM_L] [NUM_C] = {{7.1,7.7,6.5,9.6},
                                   {5.4,4.8,8.5,3.6},
                                   {9.5,7.5,4.8,8.3},
                                   {2.5,4.7,8.5,6.7},
                                   {7.1,6.7,8.3,7.9,9.7} };

    printf ("Exibindo o conteúdo da matriz declarada e inicializando a matriz:\n\n");

    for (linha = 0; linha < NUM_L; linha++){
        for (coluna = 0; coluna < NUM_C; coluna++){
            printf ("%5.1f", notas [linha] [coluna]);
        }
        printf ("\n");
    }
    printf ("\nValor do elemento na segunda linha, terceira coluna: %4.2f\n", notas [1] [2]);

    return 0;
}
