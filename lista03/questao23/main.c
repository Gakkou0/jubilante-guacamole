#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma = 0;

    for (i=0; i<1000; i++){
        if (i%3==0 || i%5==0){
            soma = soma + i;
        }
    }
    printf("A soma eh %d", soma);

    return 0;
}
