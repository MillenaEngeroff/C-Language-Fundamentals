#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int anoFundacao;
    char estado[3];
} Time;

int main()
{

    Time times[5];
    int maisAntigo=0;
    int i;
    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<5; i++)
    {
        printf("Informe o nome:\n");
        scanf("%s",&times[i].nome);

        printf("Ano:\n");
        scanf("%d ",&times[i].anoFundacao);

        printf("Estado:\n");
        scanf("%s",&times[i].estado);
        getchar();

    }

    for (int i=0; i<5; i++)
    {
        if (times[i].anoFundacao <=times[maisAntigo].anoFundacao)
        {
            maisAntigo=i;
        }

    }

    printf("Time mais antigo:\n");
    printf("%s\n",times[maisAntigo].anoFundacao);
    return 0;
}
