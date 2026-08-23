#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    char sexo;

    int idade, maior, menor;
    int contM = 0;
    int contF = 0;
    int somaPesoM = 0;
    int somaIdadeF = 0;


    float peso, altura;

    setlocale(LC_ALL, "Portuguese");
    for (int i=0; i<3; i++)
    {
        printf(" Pessoa %d informe seu sexo (F ou M): ", i+1);
        scanf("%c", &sexo);

        printf(" Informe sua idade: ");
        scanf("%d", &idade);

        printf(" Informe seu peso: " );
        scanf("%f", &peso);

        printf("Informe sua altura");
        scanf("%f", &altura);
        getchar();

        if (i==0)
    {
        maior = idade;
        menor = idade;
    }
    if (idade > maior)
    {
        maior = idade;
    }
    if (idade < menor)
    {
        menor = idade;
    }
    if (sexo == 'm' || sexo == 'M')
    {
        contM++;
    }
    if (sexo == 'f' || sexo == 'F')
    {
        contF++;
    }

if ( sexo == 'm' || sexo == 'M' >= 1,80)
    {
        somaPesoM++;
    }
    if ( sexo == 'm' || sexo == 'M' && altura>= 1,80)
    {
        somaPesoM++;
    }
     if ( sexo == 'f' || sexo == 'F' && idade < 25)
    {
        somaIdadeF++;
    }

}



    printf("\n Maior idade: %d", maior);
    printf("\n Menor idade: %d", menor);
    printf("\nHomens: %d", contM);
    printf("\nMulheres: %d", contF);
    printf("\nHomens com mais de 1,80: %d", somaPesoM);
     printf("\nMulheres com menos de 25 anos: %d", somaIdadeF);
    return 0;
}
