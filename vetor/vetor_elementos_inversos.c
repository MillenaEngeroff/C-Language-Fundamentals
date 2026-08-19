#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor [5];
    setlocale(LC_ALL,"Portuguese");

    printf("Informe 5 números:\n");
    for (int i=0; i<5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Elementos inversos:\n");
    for (int i=4; i>=0; i--)
    {
        printf("%d\n",vetor[i]);
    }

    return 0;
}
