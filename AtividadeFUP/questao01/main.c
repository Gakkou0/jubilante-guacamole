/*Preencha dois vetores (A e B) de tamanhos definidos pelo usuário com números inteiros no intervalo
de 0 a 100. Depois, coloque em um terceiro vetor (C) todos os números que apareceram em apenas
um dos vetores. Ou seja, o vetor C deverá ter os elementos que aparecem somente em A junto com os
elementos que aparecem somente em B.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tamanhoA, tamanhoB, tamanhoC, elemIguais = 0, i, j, *A, *B, *C, temElemIgual = 0, x = 0;
    srand(time(NULL));
    
    scanf("%d %d", &tamanhoA, &tamanhoB);
    A = (int *)(malloc(tamanhoA * sizeof(int)));
    B = (int *)(malloc(tamanhoB * sizeof(int)));

    for (i=0; i<tamanhoA; i++){
        A[i] = rand() % 100;
    }
    for (i=0; i<tamanhoB; i++){
        B[i] = rand() % 100;
        for (j=0; j<tamanhoA; j++){
            if (B[i]==A[j]){
                elemIguais++;
            }
        }
    }

    tamanhoC = (tamanhoA + tamanhoB)- (2 * elemIguais);

    C = (int *)(malloc(tamanhoC * sizeof(int)));

    for (i=0; i<tamanhoA; i++){
        temElemIgual = 0;
        for(j=0; j<tamanhoB; j++){
            if (A[i]==B[j]){
                temElemIgual = 1;

            }
            if (j==tamanhoB-1){
                if(temElemIgual == 0){
                    C[x] = A[i];
                    x++;
                }
            }
        }
    }

     for (i=0; i<tamanhoB; i++){
        temElemIgual = 0;
        for(j=0; j<tamanhoA; j++){
            if (B[i]==A[j]){
                temElemIgual = 1;
            }
            if (j==tamanhoB-1){
                if(temElemIgual == 0){
                    C[x] = B[i];
                    x++;
                }
            }
        }
    }

    printf("Vetor A: \n");
    for (i=0; i<tamanhoA; i++){
        printf("%d ", A[i]);
    }
    printf("\n \n");
    printf("Vetor B: \n");
    for (i=0; i<tamanhoB; i++){
        printf("%d ", B[i]);
    }
    printf("\n \n");
    /*
    printf("\n");
    printf("%d \n", tamanhoA);
    printf("%d \n", tamanhoB);
    printf("%d \n", tamanhoC);
    printf("%d \n", elemIguais);
    */

    printf("Vetor C: \n");
    for (i=0; i<tamanhoC; i++){
        printf("%d ", C[i]);
    }

    return 0;
}
