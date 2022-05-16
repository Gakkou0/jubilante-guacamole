#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, maiorNum, maiorPose;

    for (i=0; i<10; i++){
        scanf("%d", &num[i]);
        if (i==0){
            maiorNum = num[i];
        }

        if (num[i]>maiorNum){
            maiorNum = num[i];
            maiorPose = i;
        }
    }

    printf("%d \n", maiorNum);
    printf("%d \n", maiorPose);
    
    return 0;
    return 0;
}
