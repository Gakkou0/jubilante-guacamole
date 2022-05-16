#include <stdio.h>
#include <stdlib.h>

    // incompleta

int main()
{
    float num, i, fato = 1, soma;

    printf("Digite o numero \n");
    scanf("%f", &num);

    int j = 0;
    for (i=1; i<=num; i++){

        for (j=num; j>=1; j--){
            fato = fato * i;
        } if (j=1) {
            soma = soma + (1/fato);
        }
    }

    printf("%f", soma);
    /* for (i=1; i<=num; i++){
        soma = soma + (1/i);
    }
    */


    return 0;
}
