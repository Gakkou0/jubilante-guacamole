#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, maiorNum, menorNum;

    for (i=0; i<10; i++){
        scanf("%d", &num[i]);
        if (i==0){
            maiorNum = num[i];
            menorNum = num[i];
        }

        if (num[i]>maiorNum){
            maiorNum = num[i];
        }
        if (num[i]<menorNum){
            menorNum = num[i];
        }
    }

    printf("%d \n", maiorNum);
    printf("%d \n", menorNum);
    
    return 0;
}
