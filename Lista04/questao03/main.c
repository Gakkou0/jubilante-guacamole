#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[10], quad[10];
    int i;

    for (i = 0; i < 10; i++){
        scanf("%f", &num[i]);
        quad[i] = num[i] * num[i];
    }

    for (i = 0; i < 10; i++){
        printf("%.2f \n", num[i]);
        printf("%.2f \n \n", quad[i]);
    }

    return 0;
}
