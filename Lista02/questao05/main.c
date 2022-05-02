#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, raiz, pot;
    printf("Digite um numero: \n");
    scanf("%f", &num);

    if(num>0){
        raiz = sqrt(num);
        printf("A raiz quadrada e: %f", raiz);
    }
    else if (num<0){
        pot = pow(num,2);
        printf("A potencia e: %f", pot);
    }

    return 0;
}
