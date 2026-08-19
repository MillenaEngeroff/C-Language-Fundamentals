#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///Implemente um programa em C que crie um vetor de inteiros de cinco elementos (por leitura),
/// e que posteriormente imprima na tela a soma desses elementos.

int main()
{
    int num[5],soma=0;
    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<5; i++)
    {
        printf("Informe um número %d: ",i+1);
        scanf("%d",&num[i]);
         soma+=num[i];
    }

    printf("A soma dos números é:%d\n",soma);
    return 0;
}
