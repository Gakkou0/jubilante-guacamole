#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, pot, raiz;

    printf("Digite um numero\n");
    scanf("%d", &num);

    if (num>0){
    raiz = sqrt(num);
        printf("A raiz e: %d \n", raiz);

    pot = pow(num,2);
        printf("A potencia e: %d \n", pot);
    }
    if (num<0){
        printf("Numero invalido1");
    }
    return 0;
}
