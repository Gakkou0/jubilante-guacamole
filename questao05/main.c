#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, i;

    while(num<1){
        printf("digite um numero\n");
        scanf("%d", &num);

        if (num<1){
            printf("Valor invalido \n");
        }
        if (num==1) {
            printf("1 nao eh primo");
        }
    }


    for (i=2; i <= num/2; i++){
        if (num%i==0){
            printf("%d nao eh primo", num);
            return 0;
        } else {
            printf("%d eh primo", num);
        }
    }
    return 0;
}
