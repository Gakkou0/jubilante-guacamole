#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contapar = 0; // conta a quantidade de números pares
    int i, soma = 0;

    for (i=0; contapar<=50; i++){
        if (i%2==0){
            soma = soma + i;
            contapar++;
        }
    }
    printf("A soma eh %d", soma);
    return 0;
}
