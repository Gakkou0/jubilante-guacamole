#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], contaPar = 0, i;

    for (i=0; i<10; i++){
        scanf("%d", &num[i]);
        if (num[i]%2==0){
            contaPar++;
            printf("%d eh par \n", num[i]);
            printf("%d \n", contaPar);
        }
    }
    return 0;
}
