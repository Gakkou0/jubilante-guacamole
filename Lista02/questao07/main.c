#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num%2!=0){
        printf("Numero e impar");
    }
    else{
        printf("Numero par");
    }
    return 0;
}
