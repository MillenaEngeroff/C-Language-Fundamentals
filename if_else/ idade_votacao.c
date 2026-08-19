#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/// Escreva um algoritmo que leia o ano de nascimento de uma pessoa,
/// calcule e mostre sua idade ao final de 2023, e se neste mesmo
/// período essa pessoa já terá idade para votar (mínimo de 16 anos),
/// e para conseguir a carteira de habilitação (mínimo de 18 anos).
/// Apresente as três saídas possíveis,
/// e desconsidere a data em que ocorrerá a eleição.

int main()
{
   int ano, idade;
   setlocale(LC_ALL, "Portuguese");
    printf("\nInforme seu ano de nascimento:");
    scanf("%d", &ano);

    idade = 2026 - ano;
     if (idade >= 16 && idade < 18)
     {
         printf ("\nIdade para votar\n");
     }
     else if (idade >= 18)
     {
         printf("\nIdade para tirar habilitação\n");
     }
     else if (idade < 16)
     {
         printf("\nSem idade para votar ou tirar habilitação\n");
     }
    return 0;
}
