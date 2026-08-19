#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char sexo;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe seu sexo (M ou F): \n");
    scanf(" %c", &sexo);
    if (sexo =='M' || sexo == 'm')
    {
        printf("Sexo masculino");
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        printf("Sexo feminino");
    }
    else
    {
        printf("Opção inválida");
    }
    return 0;
}
