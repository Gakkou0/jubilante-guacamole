#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i=1 ,j=1;
    float soma = 0;

    while (i<100 && j<51){
    soma = soma + (i/j);

    i=i+2;
    j++;
    }

    printf("%f", soma);

    return 0;
}
