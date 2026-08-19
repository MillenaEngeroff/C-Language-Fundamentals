#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char produto[6][50];
    float preco [6];
    float media;
    float soma=0;
    int indiceMaior=0;
    setlocale(LC_ALL,"Portuguese");

    for (int i=0; i<6; i++)
    {
        printf("Informe o nome do produto:\n");
        fgets(produto[i],sizeof(produto[i]),stdin);

        printf("Informe o preço do produto:\n");
        scanf("%f",&preco[i]);
        getchar();

        soma+=preco[i];

        if (preco[i] > preco[indiceMaior])
        {
            indiceMaior=i;
        }
    }

    media=soma/6;

    printf("Média dos produtos: %.2f\n",media);
    printf("Produto de maior valor: %s\n",produto[indiceMaior]);
    return 0;
}
