#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int bissexto (int ano)
{
    if ((ano % 4 ==0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int ano,resultado;

    printf("Informe o ano:\n");
    scanf("%d",&ano);

   resultado = bissexto(ano);

    if  (resultado==1)
    {
        printf("S\n");
    }
    else
    {
        printf("N");
    }

    return 0;
}
