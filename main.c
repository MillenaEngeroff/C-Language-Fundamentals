#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   char nome [50];
   float  nCarros, tCarros, salTotal;
   setlocale (LC_ALL, "Portuguese");
   printf("Informe seu nome: \n");
   scanf ("%s", &nome);
   printf ("Informe o número de carros vendidos: \n");
   scanf ("%f", &nCarros);
   printf ("Informe o valor total de vendas: \n");
   scanf ("%f", &tCarros);
   salTotal = 700 + (nCarros*80) + (tCarros*1.04);
   printf (" \n Seu salário total é de: %.2f", salTotal);



    return 0;
}
