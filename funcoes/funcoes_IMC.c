#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float calculoIMC (float peso, float altura)
{
float imc;
imc=peso/pow(altura,2);
return imc;
}

int main()
{
    float peso,altura,imc;
    setlocale(LC_ALL,"Portuguese");

    printf("Informe seu peso (kg):\n");
    scanf("%f",&peso);

    printf("Informe sua altura: \n");
    scanf("%f",&altura);

    imc=calculoIMC(peso,altura);

    printf("Seu IMC é:%.2f\n",imc);
    return 0;
}
