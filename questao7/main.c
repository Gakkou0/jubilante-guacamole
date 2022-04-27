#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int i, soma = 0;
    for (i=0; i< 10; i++){
        printf("Digite o %d numero \n", i+1);
        scanf("%d", &num[i]);

        soma = soma + num[i];
    }
    printf("A soma dos digitos sao: %d", soma);
    return 0;
}
