#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somaquad =0, quadsoma=0, i;

    for (i=0; i<=100; i++){
        quadsoma = quadsoma + i;
        somaquad = somaquad + (i*i);
    }

    quadsoma = quadsoma * quadsoma;

    printf("%d \n", quadsoma-somaquad);

    return 0;
}
