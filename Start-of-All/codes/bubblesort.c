/* carai de bubblesort */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main ()
{
    setlocale (LC_ALL, "");

    int numeros [TAM];
    int i, aux, contador;

    //Inserção dos valores
        printf ("Coloque os numeros de um a dez aqui e pressione Enter em seguida: \n");
            for (i = 0; i < TAM;i++) {
                scanf ("%d", &numeros[i]);
    }
    //Ordem bagunçada dos arrays, pré bubblesort
        printf ("Ordem atual dos numeros no array: \n");
            for (i = 0; i < TAM; i++) {
                printf ("%4d", numeros[i]);
    }

    /*Algoritmo bubblesort e organização dos valores outrora bagunçados*/
        for (contador = 1; contador < TAM; contador++){
            for(i = 0; i < TAM - 1; i++) {
                if(numeros[i] > numeros[i + 1]){
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;

    }
        }
            }
        printf ("\nOrdem dos arrays corrigidas: \n");
            for (i = 0; i < TAM; i++){
                printf("%4d", numeros[i]);
            }

            printf ("\n");

    return 0;

}
