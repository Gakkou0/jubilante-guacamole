#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num==0){
        printf("\n Numero valido");
    }
    else {
        printf ("Numero invalido! \n");
    }
    return 0;
}
