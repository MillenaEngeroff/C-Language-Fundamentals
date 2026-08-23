#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void examesFeitos (int vacinas[],int tamanho);

typedef struct
{
    char nome[100];
    int dosesAplicada;
    float eficacia;


} Vacina;

///Defina uma struct Vacina com nome, dosesAplicadas (int) e eficacia (float).
///Declare um vetor de 4 vacinas, leia os dados,
/// e crie uma função sem retorno que exiba a vacina de maior eficácia e o total de doses aplicadas somando todas.
int main()
{
    Vacina vacinas[4];

    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<4; i++)
    {
        printf("Informe o nome do paciente %d",i+1);
        fgets(vacinas[i].nome,sizeof(vacinas[i].nome),stdin);

        printf("\nInforme a dose aplicada: ");
        scanf("%d",&vacinas[i].dosesAplicadas);

        printf("\nInforme a eficacia: ");
        scanf("%f",&vacinas[i].eficacia);
    }


    printf("Hello world!\n");
    return 0;
}
void examesFeitos (int vacinas[],int tamanho)
{
    int soma=0;
    int maiorEficacia=0;
    for (int i=0; i<4; i++)
    {
        soma+=vacinas[i].doseAplicada;

        if (vacinas[i]>eficacia)
        {
            maiorEficacia=vacinas[i];
        }
    }

    printf("Maior eficacia: %f",maiorEficacia);
    printf("Soma: %d",soma);

}
