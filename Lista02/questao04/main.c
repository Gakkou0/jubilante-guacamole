#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, raiz;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num<0) {
        printf("Numero invalido! \n");
        return 0;
    }
    raiz = sqrt(num);
    printf("A raiz quadrada e: %d \n", raiz);
    return 0;
}
