#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///Leia uma matriz 3x3 de inteiros representando níveis de glicose capilar (mg/dL),
///validando que os valores fiquem entre 40 e 400.
///Calcule e imprima a soma da diagonal principal e da diagonal secundária,
///dizendo qual é maior.


int main()
{
    int matriz[3][3];
    int somaPrincipal=0;
    int somaSecundaria=0;
    int i;

    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            do
            {
                printf("\nInforme os níveis de glicose [%d][%d]:",i,j);
                scanf("%d",&matriz[i][j]);

                if (matriz[i][j]<40 || matriz[i][j]>400)
                {
                    printf("Tente novamente! Valor fora dos parâmetros");
                }

            }
            while (matriz[i][j]<40 || matriz[i][j]>400);
        }
    }

    for (int i=0; i<3; i++);
    {
        somaPrincipal=matriz[i][i];
        somaSecundaria=matriz[i][2-i];
    }

    printf("Soma dos valores da principal: %d",somaPrincipal);
    printf("\nSoma dos valores da secundária: %d",somaSecundaria);

    if (somaPrincipal>somaSecundaria)
    {
        printf("\nA soma dos valores da principal é maior");
    }
     else if (somaSecundaria>somaPrincipal)
    {
        printf("\nA soma dos valores da secundária é maior");
    }

    return 0;
}
