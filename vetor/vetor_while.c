#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome [2][35];
    float notas [2][3];
    float media[2];


    setlocale(LC_ALL,"Portuguese");
    for (int i=0; i<2; i++)
    {
       float soma=0;
        printf("Informe seu nome:\n");
        fgets(nome[i],sizeof(nome[i]),stdin);

        for (int j=0; j<3; j++) ///For para pedir nota
        {
            printf("Informe sua nota:\n");
            scanf("%f",&notas[i][j]);
            soma+=notas [i][j];

        }
        media[i]=soma/3;

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

    }

    printf("---> RESULTADOS <---\n");
    for (int i=0;i<2;i++)
    {
        printf("Nome: %sMédia: %.2f\n", nome[i],media [i]);
    }


    return 0;
}
