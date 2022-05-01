#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1, i, soma =0;

    while (num!=0){
        printf("Qual a idade? \n");
        scanf("%d", &num);

        i++;

        soma += num;
        printf("A Media eh: %d \n", soma/i);
    }

    return 0;
}
