#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, div, i;
    int algarismo[3];

    printf("Digite um numero entre 100 e 999 \n");
    scanf("%d", &num);

    if (num<100 || num>999){
        printf("Numero invalido \n");
        return 0;
    }

    div = num/10;

    algarismo[2]=num%10;
    algarismo[1]=div%10;
    algarismo[0]=num/100;

    for (i=0; i<3; i++){
    printf("O algarismo %d eh %d \n",i+1, algarismo[i]);
    }

    return 0;
}
