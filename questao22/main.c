#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, i, soma =0;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for (i=1; i<=num/2; i++) {
        if (num%i==0) {
            soma = soma + i;
        }
    }
    printf("A soma eh: %d \n", soma);
    return 0;
}
