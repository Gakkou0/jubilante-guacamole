#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, fato = 1;

    printf("Digite o numero \n");
    scanf("%d", &num);

    for (i=num; i>=1; i--){
        fato = fato * i;
    }
    printf("O fatorial eh %d", fato);
    return 0;
}
