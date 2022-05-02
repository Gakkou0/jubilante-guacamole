#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite o primeiro e segundo numero: \n");
    scanf("%d %d", &a, &b);

    if(a>b) {
        printf ("%d e o maior numero", a);
    }
    else if (a<b){
        printf("%d e o maior numero", b);
    }
    else{
        printf("Numeros iguais");
    }
    return 0;
}
