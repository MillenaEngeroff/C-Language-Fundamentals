#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void analisaColesterol (float vetor[],int tamanho);
///Leia um vetor de 10 números reais representando níveis de colesterol de 10 pacientes.
/// Crie uma função sem retorno analisaColesterol que recebe o vetor e o tamanho, e imprima:
///a média, quantos pacientes estão acima de 200 (alto risco) e quantos estão dentro do normal.


int main()
{
    float vetor[10];

    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<10; i++)
    {
        printf("Informe os níveis de colesterol do paciente %d:", i+1);
        scanf("%f",&vetor[i]);
    }

    analisaColesterol (vetor,10);
    return 0;
}
void analisaColesterol (float vetor[],int tamanho)
{
   float soma=0;
   float media;
   int altoRisco=0;
   int normal=0;

   for (int i=0;i<tamanho;i++)
   {
      soma+=vetor[i];

      if (vetor[i]>200)
      {
          altoRisco++;
      }
      if (vetor[i]<190)
      {
          normal++;
      }
   }
   media=soma/10;

   printf("Média dos colesterois: %.2f", media);
   printf("\nQuantidade de colesterois acima de 200: %d", altoRisco);
   printf("\nQuantidade de colesterois abaixo de 190: %d", normal);

}
