#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor[8]={70,25,64,39,15,2,55,43};
    int menor, maior;
    setlocale(LC_ALL,"Portuguese");

    menor=vetor[0];
    maior=vetor[0];

    for (int i=1;i<8;i++)
    {
     if (vetor[i]<menor)
     {
         menor=vetor[i];
     }
     else if (vetor[i]>maior)
     {
         maior=vetor[i];
     }
    }
     printf("Menor vetor: %d\n",menor);
     printf("Maior vetor: %d\n",maior);
    return 0;
}
