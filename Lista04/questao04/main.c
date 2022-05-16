#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[8];
    int x, y, i;

    for (i=0; i<9; i++){
        scanf("%d", &num[i]);
    }

    scanf("%d %d", &x, &y);

    printf("%d", num[x] + num[y]);
    return 0;
}
