/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o
maior e o menor valor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int num[5], i, maiorNum, menorNum, posiMaior, posiMenor;

    for (i=0; i<5; i++){
        scanf("%d", &num[i]);
        if (i==0){
            maiorNum = num[i];
            menorNum = num[i];
            posiMaior = i;
            posiMenor = i;
        }

        if (num[i]>maiorNum){
            maiorNum = num[i];
            posiMaior = i;
        }
        if (num[i]<menorNum){
            menorNum = num[i];
            posiMenor = i;
        }
    }

    printf("\n");
    printf("%d \n", maiorNum);
    printf("%d \n \n", posiMaior);
    printf("%d \n", menorNum);
    printf("%d \n \n", posiMenor);

    return 0;
}
