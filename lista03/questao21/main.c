#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for (i=1; i<=num/2; i++) {
        if (num%i==0) {
            printf("%d \n", i);
        }
    }
    printf("%d", num);
    return 0;
}
