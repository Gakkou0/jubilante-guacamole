#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5], media;
    int i;

    for (i=0; i<5; i++){
        scanf("%f", &notas[i]);
    }

    media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4])/5;

    printf ("%.2f", media);
    return 0;
}
