#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///Leia uma matriz 3x3 de inteiros representando doses de radiação (em mSv),
/// validando (por laço) que os valores estejam entre 0 e 50.
///Substitua por -1 todas as posições com valor maior que 40.
/// Imprima a matriz original e a modificada.


int main()
{
    int matriz [3][3];
    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            do
            {
                printf("\nInforme a dose de radiação [%d] [%d]:",i,j);
                scanf("%d",&matriz[i][j]);

                if (matriz[i][j]<0 || matriz[i][j]>50)
                {
                    printf("\nTente novamente! Apenas valores entre 0 e 50");
                }
            }

            while (matriz[i][j]<0 || matriz[i][j]>50);

        }
    }

    printf("\n--> MATRIZ ORIGINAL <--\n");


    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }


    printf("\n--> MATRIZ MODIFICADA <--\n");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (matriz[i][j]>40)
            {
                matriz[i][j]= -1;
            }
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }


    return 0;
}
