#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char sexo;
    int contM = 0;
    int contF = 0;

    float altura;
    float maior, menor;
    float somaF = 0;
    float mediaF = 0;

    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 5; i++)
    {
        printf("\nPessoa %d\n", i + 1);

        printf("Informe seu sexo (M ou F): ");
        scanf(" %c", &sexo);

        printf("Informe sua altura: ");
        scanf("%f", &altura);

        if (i == 0)
        {
            maior = altura;
            menor = altura;
        }

        if (altura > maior)
        {
            maior = altura;
        }

        if (altura < menor)
        {
            menor = altura;
        }

        if (sexo == 'M' || sexo == 'm')
        {
            contM++;
        }
        else if (sexo == 'F' || sexo == 'f')
        {
            contF++;
            somaF += altura;
        }
    }

    if (contF > 0)
    {
        mediaF = somaF / contF;
    }

    printf("\nMaior altura: %.2f", maior);
    printf("\nMenor altura: %.2f", menor);
    printf("\nQuantidade de homens: %d", contM);
    printf("\nQuantidade de mulheres: %d", contF);
    printf("\nMedia da altura das mulheres: %.2f", mediaF);

    return 0;
}
