#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;


    printf("digite o numero par\n");
    scanf("%d", &num);

    if (num%2!=0){
        printf("valor invalido \n");
        return 0;
    }

    for (i=0; i<=num; i=i+2) {
        printf("%d \n", i);
}

    return 0;
}
