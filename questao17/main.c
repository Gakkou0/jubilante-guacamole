#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    int soma = 0;
    printf("Digite um numero \n");
    scanf("%d", &num);

    for (i=0; i<=num; i++){
        soma = soma + i;
    }

    printf("o resultado da soma eh: %d", soma);
    return 0;
}
