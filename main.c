#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Exercício D:
Escreva um programa em C que leia os nomes de uma lista de convidados registrada no arquivo convidados.txt
(assuma até 8 convidados, nomes de até 40 caracteres) e apresente esses nomes na tela, numerados (1, 2, 3...)


int main()
{
    char listaConvidados [8][40];
    FILE *arquivo;

    arquivo=fopen("convidados.txt","r");

    if (arquivo==NULL)
    {
        printf("Erro ao acessar arquivo!");
        return 1;
    }

    for (int i=0; i<8; i++)
    {
        fgets (listaConvidados[i],40,arquivo);
    }

    fclose(arquivo);

    printf("Lista de convidados\n");
    for (int i=0;i<9;i++)
    {
        printf("%s",listaConvidados[i]);
    }

    return 0;
}
