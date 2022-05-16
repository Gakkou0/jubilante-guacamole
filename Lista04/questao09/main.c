#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6], i=0;

    while (i<5){
        scanf("%d", &num[i]);
        if (num[i]%2!=0){
            printf("Numero invalido");
        }
        else {
            i++;
        }
    }

    for  (i = 5; i>=0; i--){
        printf("%d \n", num[i]);
    }

    return 0;
}
