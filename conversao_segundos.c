#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int hora, min, seg, segTotal;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe a hora: \n");
    scanf("%d", &hora);
    printf ("Informe os minutos: \n");
    scanf("%d", &min);
    printf("Informe os segundos: \n");
    scanf("%d", &seg);
    segTotal = hora * 3600 + min * 60 + seg;

    printf("Os segundos são: %d", segTotal);




    return 0;
}

	
