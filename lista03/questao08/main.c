#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int soma = 0, i;

    for (i=0; i<10; i++){
        printf("digite o numero %d \n", i+1);
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }
    printf("A media eh %d", soma/10);
    return 0;
}
