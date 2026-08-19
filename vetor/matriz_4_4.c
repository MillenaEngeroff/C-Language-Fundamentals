#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///Leia uma matriz 4x4 de inteiros representando níveis de ruído (em decibéis) medidos em uma UTI,
/// validando que os valores fiquem entre 0 e 120.
/// Substitua por 0 todas as posições com valor menor que 30 (silêncio adequado). Imprima as duas matrizes.


int main()
{
    int matriz [4][4];
    setlocale(LC_ALL,"Portuguese");


    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {

            do
            {
                printf("\nInforme o nível do ruído [%d][%d]: ",i,j);
                scanf("%d",&matriz[i][j]);

                if (matriz[i][j]<0 || matriz[i][j]>120)
                {
                    printf("Tente novamente! Digite numeros entre 0 a 120\n");
                }
            }
            while (matriz[i][j]<0 || matriz[i][j]>120);
        }
    }

    printf("\n--> MATRIZ ORIGINAL <--\n");

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n--> MATRIZ MODIFICADA <--\n");

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (matriz[i][j]<30)
            {
                matriz[i][j]=0;
            }

            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
