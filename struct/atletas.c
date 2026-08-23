#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main()
{
    Atleta atletas[5];
    float maisAlto;
    int maisNovo;
    int indice1 = 0;
    int indice2 = 0;
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 5; i++)
    {
        printf(" Informe o nome do atleta %d:\n", i + 1);
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);

        printf(" Informe o esporte do atleta %d:\n", i + 1);
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);

        printf(" Informe a idade do atleta %d:\n", i + 1);
        scanf("%d", &atletas[i].idade);

        if (i == 0 || atletas[i].idade < maisNovo)
        {
            maisNovo = atletas[i].idade;
            indice2 = i;
        }

        getchar(); 

        printf(" Informe a altura do atleta %d:\n", i + 1);
        scanf("%f", &atletas[i].altura);

        if (atletas[i].altura > maisAlto || i == 0)
        {
            maisAlto = atletas[i].altura;
            indice1 = i;
        }

        getchar(); 
    }

    printf("Atleta mais alto: %s(%.2f m)\n", atletas[indice1].nome, atletas[indice1].altura);
    printf("Atleta mais novo: %s(%d anos)\n", atletas[indice2].nome, atletas[indice2].idade);

    return 0;
}
