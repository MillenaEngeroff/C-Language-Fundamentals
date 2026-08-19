#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    char titulo[3][35];
    float preco[3];
    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<3; i++)
    {
        printf("Informe o título do livro:\n");
        fgets(titulo[i],sizeof(titulo[i]),stdin);

        printf("Informe o preço do livro:\n");
        scanf("%f",&preco[i]);
        getchar();
    }

    printf("---> BIBLIOTECA <---\n");
    for (int i=0; i<3; i++)
    {
        printf("Livro: %s\nPreço: %.2f", titulo[i],preco[i]);
    }


    return 0;
}
