#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (i<=100000) {
        printf("%d \n", i);
        i = i + 1000;
    }
    return 0;
}
