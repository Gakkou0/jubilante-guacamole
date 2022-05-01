#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hchico = 150,hze = 110, anos = 0;

    while (hchico >= hze) {
        hchico += 2;
        hze += 3;
        anos ++;
    }

    printf("%d \n", hchico);
    printf("%d \n", hze);
    printf("%d \n", anos);
    return 0;
}
