#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, i, soma = 0;

    printf("Digite o numero \n");
    scanf("%f", &num);

    for (i=1; i<=num; i++){
        soma = soma + (1/i);
    }

    printf("%f \n", soma);
    return 0;
}
