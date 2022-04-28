#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, contaimp = 1;

    printf("Digite um numero \n");
    scanf("%d", &num);

    for (i=0; contaimp<=num; i++){
        if (i%2!=0){
            printf("%d \n", i);
            contaimp++;
        }
    }
    return 0;
}
