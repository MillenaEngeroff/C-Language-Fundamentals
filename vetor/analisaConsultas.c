#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void analisaConsultas (int vetor [], int tamanho, char dias [][12]);
///Leia um vetor de 7 números inteiros representando o número de consultas médicas
/// realizadas em cada dia da semana. Crie uma função sem retorno analisaConsultas que
///recebe o vetor e o tamanho, e imprima: total de consultas na semana,
/// dia com mais consultas (índice) e dia com menos consultas.

int main()
{
    int vetor[7];
    char dias[7][12]= {"Segunda","Terça","Quarta","Quinta","Sexta","Sábado","Domingo"};
    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<7; i++)
    {
        printf("Informe o número de consultas médicas na %s:\n",dias[i]);
        scanf("%d",&vetor[i]);
    }

    analisaConsultas(vetor,7,dias);

    return 0;
}
void analisaConsultas (int vetor [], int tamanho, char dias [][12])
{
    int soma=0;
    int maisConsultas=vetor [0];
    int menosConsultas=vetor [0];
    int indice1=0;
    int indice2=0;

    for (int i=0; i<tamanho; i++)
    {
        soma+=vetor[i];

        if (vetor[i]>maisConsultas)
        {
            maisConsultas=vetor[i];
            indice1=i;
        }
        if (vetor[i]<menosConsultas)
        {
            menosConsultas=vetor[i];
            indice2=i;
        }
    }
    printf("\nSoma:%d", soma);
    printf("\nDia com mais consultas: %s (%d consultas)", dias[indice1], maisConsultas);
    printf("\nDia com mais consultas: %s (%d consultas)", dias[indice2], menosConsultas);
    printf("\n");

}
