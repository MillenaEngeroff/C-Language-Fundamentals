#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    char nome[100];
    char tipoExame[30];
    float resultados;
} Exame;

///Defina uma struct Exame com nomePaciente, tipoExame e resultado (float).
///Declare um vetor de 5 exames, leia os dados,
///e imprima o nome do paciente com o maior resultado (em caso de empate,
///use a última ocorrência).

int main()
{

    Exame exames[5];
    float maiorResultado;
    int indice=0;


    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<5; i++)
    {
        printf("Informe o nome do paciente %d: ",i+1);
        fgets(exames[i].nome,sizeof(exames[i].nome),stdin);

        printf("Informe o nome exame do paciente %d: ",i+1);
        fgets(exames[i].tipoExame,sizeof(exames[i].tipoExame),stdin);

        printf("Informe o resultado do exame do paciente %d:",i+1);
        scanf("%f",&exames[i].resultados);
        getchar();

        if (i==0 || exames[i].resultados>=maiorResultado)
        {
            maiorResultado=exames[i].resultados;
            indice=i;
        }

    }
    printf("O nome do paciente com maior resultado de exame: %s", exames[indice].nome);

    return 0;
}
