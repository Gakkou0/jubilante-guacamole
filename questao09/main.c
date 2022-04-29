#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int i, soma = 0;
    int cp = 0; //faz a contagem de quantos positivos existem entre os 10 numeros informados

    for (i=0; i<10; i++){
        printf("digite numeros inteiros positivos \n");
        scanf("%d", &num[i]);

        if (num[i]>0) {
            soma = soma + num[i];
            cp = cp +1;
        }
    }
    printf("a media é %d", soma/cp);
    return 0;
}
