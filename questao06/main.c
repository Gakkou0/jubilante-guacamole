#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, np = 0;
    printf("Digite A e B \n");
    scanf("%d %d", &a, &b);

    if (a==b){
        printf("n existem numeros entre A e B");
        return 0;
    }

    int i, dif;
    if (a>b){
        i = b;
        dif = a - b;
    } else {
        i = a;
        dif = b - a;
    }
    int j;
    while ((i >= a && i <= b) || (i >= b && i <= a)){
        j=0;
        for (j=2; j<=i/2; j++){
            if (i%j==0){
                np = np+1;
                break;
            }
        }
    i++;
    }
    printf("existem %d numeros primos entre eles", (dif-np));
    return 0;
}
