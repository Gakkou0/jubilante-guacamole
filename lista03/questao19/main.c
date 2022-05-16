#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cont = 0;

    while (num!=1000){

        printf("Digite um numero \n");
        scanf("%d", &num);

        if (num%2==0 && num!=0){
            printf("O numero %d eh par \n", num);
        }
        if (num%2!=0){
            printf("O numero %d eh impar \n", num);
        }
        if (num==0) {
            printf("valor igual a 0 \n");
        }

        cont++;
        printf("Valores lidos: %d \n", cont);

    }
    return 0;
}
