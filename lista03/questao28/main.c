#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    int soma = 0;

    printf("digite o primero valor:");
    scanf("%d", &a);
    printf("digite o segundo valor:");
    scanf("%d", &b);

    if (a>b) {
        printf("intervalo de valores ivalidos");
        return 0;
    }

    for (i=a; i<b+1; i++){
        if (i%2!=0){
            soma = soma + i;
        }
    }
    printf("a soma eh: %d", soma);
    return 0;
}
