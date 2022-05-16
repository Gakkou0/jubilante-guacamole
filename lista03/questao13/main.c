#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("digite o numero \n");
    scanf("%d", &num);

    if (num<0) {
    printf("valor invalido");
    return 0;
    }

    for (i=0; i<=num; i++) {
        printf("%d \n", i);
    }
    return 0;
}
