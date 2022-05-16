#include <stdio.h>
#include <stdlib.h>

int main()
{
        int num[6], i;

    for (i = 0; i<5; i++){
        scanf("%d", &num[i]);
    }

    for  (i = 5; i>=0; i--){
        printf("%d \n", num[i]);
    }

    return 0;
}
