#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6] = {1, 0, 5, -2, -5, 7};
    int i, soma;

    soma = num[0] + num[1] + num[5];
    printf("%d \n", soma);

    num[4] = 100;

    for (i = 0; i < 6; i++){
        printf("%d \n", num[i]);
    }

    return 0;
}