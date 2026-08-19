#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor[6]= {1,2,3,4,5,6};
    int num;
    int encontrado=0;

    setlocale(LC_ALL,"Portuguese");
    printf("Informe o valor a ser procurado:\n");
    scanf("%d",&num);

    for (int i=0; i<6; i++)
    {
        if (vetor[i]==num)
        {
            encontrado=1;
            break;
        }
    }
    if (encontrado==1)
    {
        printf("---> VALOR ENCONTRADO <---");

    }
    else
    {
        printf("Valor não encontrado");
    }

    return 0;
}
