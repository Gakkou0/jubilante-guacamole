#include <stdio.h>
#include <stdlib.h>

//incompleta

int main()
{
    int num, i=0, j =1;

    printf("Digite o numero: \n");
    scanf("%d", &num);

    while (i<num){
        if (i==0){
            printf("%d \n", i);
            i++;
            printf("%d \n", i);
        } else {
            printf("%d \n", j);
            i = j + i;
            printf("%d \n", i);
            j = i + j;

    }
    }
    return 0;
}
