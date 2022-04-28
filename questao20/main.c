#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[2], i, j;
    int soma =0, mult=1;

    printf("digite o primeiro numero \n");
    scanf("%d", &num[0]);

    printf("digite o segundo numero \n");
    scanf("%d", &num[1]);

    if (num[0]==num[1]){
        printf("Não existe interalo entre eles");
    }
    if (num[0]>num[1]){
        i=num[1];
        j=num[0];
    }
    if (num[1]>num[0]){
        i=num[0];
        j=num[1];
    }

    while (i<=j){
        if (i%2!=0){
            mult = mult *i;
        }
        if (i%2==0){
            soma = soma +i;
        }
        i++;
    }

    printf("a soma eh %d \n", soma);
    printf("a multiplicacao eh %d \n", mult);

    return 0;
}
