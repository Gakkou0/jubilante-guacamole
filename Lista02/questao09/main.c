#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Digite 2 numeros: \n");
    scanf("%d %d", &a, &b);

    if (a>b) {
        printf("%d eh o maior \n", a);
    }
    else if (a<b) {
        printf("%d eh o maior \n", b);
    } else {
        printf("Os numeros sao iguais");
    }
    return 0;
}
