#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int matrizA[2][2],matrizB[2][2],matrizC[2][2];
    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2;j++)
        {
            printf ("Informe o valor [%d][%d] da matriz A:\n",i,j);
            scanf("%d",&matrizA[i][j]);
            getchar();
            printf ("Informe o valor [%d][%d] da matriz B:\n",i,j);
            scanf("%d",&matrizB[i][j]);
            matrizC[i][j]= matrizA[i][j]+matrizB[i][j];
        }
    }
    printf("MATRIZ C\n");
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; i++)
        {
            printf("%d\t",matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
