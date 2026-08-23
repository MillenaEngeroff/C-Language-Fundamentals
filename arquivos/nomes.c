#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char nome[50];
    FILE *arquivo;

    arquivo = fopen("nome.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao acessar arquivo!");
        return 1;
    }

    fgets(nome, 50, arquivo);
    fclose(arquivo);

    printf("Nome original: %s", nome);

    for (int i = 0; nome[i] != '\0'; i++)
    {
        nome[i] = toupper(nome[i]);
    }

    printf("Nome em maiúsculas: %s\n", nome);

    arquivo = fopen("nome.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro ao acessar arquivo!");
        return 1;
    }

    fprintf(arquivo, "%s", nome);
    fclose(arquivo);

    return 0;
}
