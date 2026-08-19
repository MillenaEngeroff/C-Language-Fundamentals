#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


///Escreva um algoritmo que receba como entrada um número n e,
/// imprima na tela a tabuada desse número.
/// Use uma estrutura de repetição com pós-condição.

int main()
{
    int n, i;
    setlocale (LC_ALL, "Portuguese");
    printf("Informe um número:");
    scanf("%d", &n);

    do
    {
     printf("\n%d x %d = %d", n, i, (n*i));
     i++;
    } while (i <= 10);

    return 0;
}
