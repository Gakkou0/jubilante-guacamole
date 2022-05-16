#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int i;
    int maior, menor;

    for (i=0; i<10; i++){
        printf("Digite o valor %d \n", i+1);
        scanf("%d", &num[i]);

        if (i==0) {
            maior = num[i];
            menor = num[i];
        }
        if (num[i] > maior){
            maior = num[i];
        }
        if (num [i] < menor){
            menor = num[i];
        }

    }
    printf ("O maior valor eh %d e o menor eh %d \n", maior, menor);
    return 0;
}
