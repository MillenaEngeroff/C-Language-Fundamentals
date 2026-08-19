#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


///Implemente um programa que faça a leitura de uma matriz de float 3 x 3
///e posteriormente imprima na tela os elementos de sua
///diagonal secundária.

int main()
{
    float matriz [3][3];
    int i;
    setlocale(LC_ALL,"Portuguese");

    printf("Informe os 9 elementos da matriz 3x3:\n");

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Elemento [%d][%d]:",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    printf("\nElementos da diagonal secundária:\n");

    for (int i=0;i<3;i++);
    {
        printf("%.2f\n", matriz[i][2-i]);
    }
    return 0;
}
