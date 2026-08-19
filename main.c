#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   int idade;
   setlocale(LC_ALL, "Portuguese");
   printf("Informe sua idade: \n");
   scanf("%d", &idade);
   if (idade < 14)
   {
       printf("Categoria infantil");
   }
   else if (idade >= 14 && idade <18)
   {
       printf ("Categoria juvenil");
   }
   else if (idade > 18)
   {
       printf("Categoria sênior");
   }

    return 0;
}
