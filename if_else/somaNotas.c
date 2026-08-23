#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{

    float notas, maior, menor, mediaN, somaN;
    int contN=0;
    setlocale(LC_ALL, "Portugues");
    for (int i=0; i<5; i++)
    {
        printf("\nInforme a nota %d: \n", i+1);
        scanf("%f", &notas);

        if (i==0)
        {
            maior = notas;
            menor = notas;
        }

        if (notas > maior)
        {
            maior = notas;
        }
        if (notas < menor)
        {
            menor = notas;

        }
        if (notas >=7)
        {
            contN++;
        }
        somaN= somaN+notas;
    }

    mediaN = somaN/5;

    printf("\nMaior nota: %.2f", maior);
    printf("\nMenor nota: %.2f", menor);
    printf("\nMédia da turma: %.2f", mediaN);
    printf("\nAprovados: %d", contN);
    getchar();


    return 0;
}
