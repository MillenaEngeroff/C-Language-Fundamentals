#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int i,j;
    printf("Informe os valores:\n");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            do
            {
                scanf("%d",&matriz[i][j]);
            }
            while (matriz[i][j]<0 || matriz[i][j]>255);
        }
    }

    printf("Matriz original\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (matriz[i][j]<=25)
            {
                matriz[i][j]= 0;
            }
        }

        printf("Matriz Modificada\n");
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                printf("%4d", matriz[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
}
