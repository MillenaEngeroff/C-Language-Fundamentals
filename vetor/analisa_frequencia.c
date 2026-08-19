#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void analisaFrequencia (int vetor [], int tamanho)
{
    int i;
    int maior=vetor[0];
    int menor=vetor[0];
    int taqui=0;
    int soma= 0;
    float media;

    for (int i=0; i<tamanho; i++)
    {
        soma+=vetor[i];

        if (vetor[i]>maior)
        {
            maior=vetor[i];
        }
        if (vetor[i]<menor)
        {
            menor=vetor[i];
        }
        if (vetor[i]>100)
        {
            taqui++;
        }
    }
    media=(float)soma/tamanho;

    printf("Maior:%d\n",maior);
    printf("Menor:%d\n",menor);
    printf("Media:%.2f\n",media);
    printf("Taquicardia:%d\n",taqui);
}

int main()
{

    int freqC[6]= {80,110,95,130,85,101};
    setlocale(LC_ALL,"Portuguese");

    analisaFrequencia (freqC,6);

    return 0;
}
